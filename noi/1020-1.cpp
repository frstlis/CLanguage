#include<bits/stdc++.h>
using namespace std;
int main(){
    int in,n=0;
    int i=0;
    int a[5];
    cin>>in;
    while(in){
        n++;
        a[i++]=in%10;
        in/=10;
    }
    printf("%d\n",n);
    for(i=0;i<n;i++){
        printf("%d\n",a[n-i-1]);
    }
    return 0;
}