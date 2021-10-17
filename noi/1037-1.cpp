#include<bits/stdc++.h>
using namespace std;
int bitn(long long n);
int bitn(long long n,long long m){
    if(n<10)
        n=pow(n,m);
    else{
        n%=10;
        n=pow(n,m);
    }
    return n;
}
int main()
{
    long long a,b,n;
    cin>>a>>b;
    n=bitn(a,b);
    cout<<n;
    return 0;
}