#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    while(n!=0){
        printf("shang: %lld,yu: %lld \n",n/2,n%2);
        n/=2;
    }
    return 0;
}