#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,i=1;
    long long a[100001];
    cin>>n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
            a[i]=n;
            i++;
        }
        else{
            n=3*n+1;
            a[i]=n;
            i++;
        }   

    }
    for(int j=0;j<i;j++){
        printf("%lld ",a[j]);
    }
    printf("\n");
    printf("%lld\n",i);
    return 0;
}