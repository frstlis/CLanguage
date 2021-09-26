#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double F,C;
	cin>>F;
	C=(F-32)*5/9.0;
	printf("%.4lf",C);
	return 0;
}