#include "stdio.h"

struct node{
	int st;
	int ed;
}a[100001];


int main(){
	int n=10000;
	//scanf("%d",&n);
	//for(int i=0;i<n;i++)
	//	scanf("%d %d",&a[i].st,&a[i].ed);
	for(int j=0;j<n;j++)
		printf("%d %d \n",a[j].st,a[j].ed);
	return 0;
}
