#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a[12]={0};
    
    cin>>n;
    
    for(int i=0;i<12;i++){
        a[i]=n%10;
    }
    for(int i=0;i<12;i++){
        printf("%d ",a[i]);
    }
    return 0;
}