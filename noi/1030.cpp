#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,i=1;
    cin>>n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }   
        i++;    
    }
    printf("%lld\n",i);
    return 0;
}

