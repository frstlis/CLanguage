#include <stdio.h>
#include <iostream>
using namespace std;
void nzp(int v){
	if(v>0)
		printf("%d \n",v);
	else
		printf("%d \n",0); 
} 
int main() {
	int a[5],i;
	printf("input 5 numbers\n");
	for(i=0;i<5;i++){
		//scanf("%d",&a[i]);
		cin>>a[i];
		nzp(a[i]);
	}
	return 0; 
}
