#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,su=1,n;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        su*=a;
    }
    n=su%10;
    cout<<n;
    return 0;
}