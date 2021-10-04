#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    return a%b?gcd(b,a%b):b;
}

int main(){
    int m,n,s;
    cin>>m>>n;
    s=gcd(m,n);
    if(s==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}