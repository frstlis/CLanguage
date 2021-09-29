#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    long int a[17][17];
    long int sum[17]={0};
    long int s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            sum[i]+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<sum[i]<<" ";
        s += sum[i];
    }
    cout<<s;
    return 0;
}