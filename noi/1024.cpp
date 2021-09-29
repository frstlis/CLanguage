#include<bits/stdc++.h>
using namespace std;


int main(){
	unsigned long long n, num, i;
	double sq;
	cin>>n;
	sq = sqrt(n);
	if(sq - (int)sq == 0)
		num = 1;
	else
		num = 0;
	for(i=1; i<(int)sq; i++){
		if(n % i == 0)
			num += 2;
	}
	if(sq - (int)sq > 0 && n%(int)sq == 0)
		num += 2;
	cout<<num;
	return 0;
} 