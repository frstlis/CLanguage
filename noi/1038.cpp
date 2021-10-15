#include <bits/stdc++.h>

using namespace std;

int main(){
	int sum=0,n;
	for(int i=0;i<25;i++){
		cin>>n;
		sum+=n;
	}
	sum=182-sum;
	printf("%d",sum);
	return 0;
}
	
