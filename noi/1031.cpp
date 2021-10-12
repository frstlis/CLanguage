#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int i, j;
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(j=n-i-1; j>0; j--)
		{
			putchar(' ');
		}
		for(j=i*2+1; j>=1; j--)
		{
			putchar('*');
		}
		cout<<endl;
	}
	return 0;
}
