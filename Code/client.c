#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

/*
*by GeekBear
*/

int main()
{
	char readBuffer[101];
	char writeBuffer[201];
	int connectRet,socketfd;
	struct sockaddr_in clientAddr;
	//signal(SIGPIPE,SIG_IGN);//屏蔽管道破解信号，一般服务器都会屏蔽这个型号 
	socketfd = socket(AF_INET,SOCK_STREAM,0);//创建套接字 ,AF_NET:ipv4，SOCK_STREAM:TCP协议 
	if(socketfd == -1)
	{
		printf("创建套接字失败!\n");
	}
	else
	{
	//	return 0;
		printf("创建套接字成功!\n");
		bzero(&clientAddr,sizeof(clientAddr));//相当于memset
		clientAddr.sin_family=AF_INET;//ipv4
		//ip地址:0x7f000001:127.0.0.1
		//0x7f:127
		clientAddr.sin_addr.s_addr=htonl(0x7f000001);
		clientAddr.sin_port = htons(8090);//设置端口号
		connectRet=connect(socketfd,(struct sockaddr*)&clientAddr,sizeof(struct sockaddr));
		if(-1==connectRet)
		{
			printf("连接到服务器失败!\n");
		}
		else
		{
			printf("连接到服务器成功!\n");
			printf("请输入要发送的消息并回车:");
			scanf("%s",writeBuffer);
			write(socketfd,writeBuffer,strlen(writeBuffer));
			int readLength=read(socketfd,readBuffer,100);
			if(readLength>0)
			{
				readBuffer[readLength]=0;
				printf("收到的消息:%s\n",readBuffer);
			}
		}
		close(socketfd);
	}
	printf("程序结束\n");
	return 0;
}