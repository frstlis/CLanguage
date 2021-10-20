#include <iostream>
int main(){
	int x;
	x=30;
	int y=33;
	int a1,a2,b=2,c=7,d=5; 
	a1=(++b,c--,d+3); 
	a2= ++b,c--,(d+3); 
	printf("%d%d%d%d%d",a1,a2,b,c,d);
	printf("%d",x);
	if(x==0) 
		goto one;	
	else
		goto two;
	
	
	one:
	std::cout<<"Hello"<<std::endl;
	
	two:
	int test;
	test=3;
	printf("%d",test);
	printf("%d",y);
	
	char ch = static_cast<char>(y);
	
	printf("%c",ch);
	
	return 0;
	}
