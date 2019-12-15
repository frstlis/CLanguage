#include <iostream>

using namespace std;

long long fib(int n){
	if(n>2)
		return fib(n-1)+fib(n-2);
	else
		return 1;
}
int main(){
	int n;
	long long sum;
	cin>>n;
	sum = fib(n);
	cout << sum<<endl;
	return 0;
}