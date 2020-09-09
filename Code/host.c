#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>

//by R.R.Eric

#define PORT 8080		//监听的端口号
#define MAX_CONNECT 20 	//最大连接数
#define BUFFER_SIZE 1024*32 	//32k缓冲区满足绝大多数网页请求
#define NAME_BUFFER_SIZE 1024	//路径缓冲 
#define HTTP_END "\r\n\r\n"		//http协议头以两个回车换行结尾
#define BASE_DIR "./100_www/"	//服务器根目录设为当前程序运行路径
#define DEFAULT_PAGE "/index.html"	//默认页面
#define HTTP_OK "HTTP/1.1 200 OK\r\n\r\n"	//http正常回应


static void *doAccept(void * parm);           

//做协议解析 
static void *doProc(void *data);

int writeFile(int fd,char *filePath);

int main()
{
	pthread_t thread;
	printf("start!\n");
	printf("按回车键退出!\n");
	bzero(&thread,sizeof(thread));
	pthread_create(&thread,NULL,doAccept,NULL);
	getchar();
	printf("end!\n");
	return 0;
}

static void *doAccept(void * parm)
{
	int socketfd,connectfd;
	pthread_t thread;
	struct sockaddr_in serverAddr;
	pthread_t pthread;
	signal(SIGCHLD,SIG_IGN);
	signal(SIGPIPE,SIG_IGN);
	socketfd = socket(AF_INET,SOCK_STREAM,0);
	if(socketfd == -1)
	{
		printf("创建套接字失败!\n");
	}
	else
	{
		printf("创建套接字成功!\n");
		bzero(&serverAddr,sizeof(serverAddr));
		serverAddr.sin_family=AF_INET;
		serverAddr.sin_addr.s_addr=htonl(INADDR_ANY);
		serverAddr.sin_port = htons(PORT);
		if( -1==bind(socketfd,(struct sockaddr*)&serverAddr,sizeof(struct sockaddr)) )
		{
			//FIXME 绑定端口失败时发生段错误！ 
			printf("绑定端口失败！\n");
		}
		else
		{
			printf("绑定端口成功！\n");
			if(-1==listen(socketfd,MAX_CONNECT))
			{
				printf("创建监听失败！\n");
			}
			else
			{
				printf("创建监听成功！\n");
				printf("在浏览器中输入http://127.0.0.1:%d来访问本服务器\n",PORT);
				while(1)
				{
					//sleep(1);
					socklen_t socketLen=0;
					connectfd = accept(socketfd,(struct sockaddr*)&serverAddr,&socketLen);
					if(connectfd<=0)
					{
						printf("接受连接失败！\n");
					}
					else
					{
						printf("接受连接成功！\n");
						bzero(&thread,sizeof(thread));
						pthread_create(&thread,NULL,doProc,(void*)connectfd);
					}
				}
			}
		}
		
	}
	return NULL;
}

//做协议解析 
static void *doProc(void *data)
{
	int connectfd = (int)data;
	char *buffer = (char *)malloc(BUFFER_SIZE+1);
	if(buffer==NULL)
		printf("malloc return NULL!");
	int readLen=read(connectfd,buffer,BUFFER_SIZE);
	if(readLen<=0)
		goto END;
	buffer[readLen]=0;
	//printf("%s",buffer);
	int endLen = strlen(HTTP_END);
	if( (readLen>=endLen) && (strcmp(buffer+readLen-endLen,HTTP_END)==0) )
	{//是http协议
		printf("%s",buffer);
		char *startPos=strstr(buffer,"GET ");
		
		if(startPos!=NULL)
		{
			startPos+=4;
			char *endPos=strstr(startPos," ");
			if(endPos!=NULL&&(endPos-startPos)<NAME_BUFFER_SIZE)
			{
				char *nameBuffer=malloc(NAME_BUFFER_SIZE+1);
				if(nameBuffer==NULL)
					printf("malloc return NULL!");
				nameBuffer[0]=0;
				strcat(nameBuffer,BASE_DIR);
				strncat(nameBuffer,startPos,endPos-startPos);
				if(nameBuffer[strlen(nameBuffer)-1]=='/')
				{
					printf("is_dir,use default page.\n");
					strcat(nameBuffer,DEFAULT_PAGE);
				}
				/*
				//判断路径是否为文件夹，貌似不安全 
				struct stat st;
				stat(nameBuffer,&st);
				if (S_ISDIR(st.st_mode))
				{
					printf("is_dir,use default page.\n");
					strcat(nameBuffer,DEFAULT_PAGE);
				}*/
				printf("GET:%s\n",nameBuffer);
				writeFile(connectfd,nameBuffer);
				free(nameBuffer);
			}
		}
	}
END:
	//printf("end doProc\n");
	free(buffer);
	close(connectfd);
	return NULL;
}

int writeFile(int fd,char *filePath)
{
	//printf("write file:%s\n",filePath);
	int fileHandler=open(filePath,0,O_RDONLY);
	if(fileHandler<=0)
		return -1;
	char *buffer=(char *)malloc(BUFFER_SIZE+1);
	if(buffer==NULL)
		printf("malloc return NULL!");
	write(fd,HTTP_OK,strlen(HTTP_OK));
	int readLen=0;
	while( 0<(readLen=read(fileHandler,buffer,BUFFER_SIZE)) )
	{
		write(fd,buffer,readLen);
	}
	
	free(buffer);
	close(fileHandler);
	return 0;
}


