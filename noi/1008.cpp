#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
    cin>>N;
	if(N==pow(N%10,3)+pow(N/10%10,3)+pow(N/100,3))
		printf("YES");
	else
		cout<<"NO";
	return 0;
}