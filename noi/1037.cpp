#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n;
    cin>>a>>b;
    a%=10;
    n=a;
    for(int i=1;i<b;i++){
        n*=a;
        if(n>10)
            n%=10;
    }
    cout<<n;
    return 0;
}