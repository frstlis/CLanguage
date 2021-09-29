#include <bits/stdc++.h>
using namespace std;
struct data{
    int g;
    int s;
    int c;
};
int main(){
    int n;
    int sum;
    data a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].g>>a[i].s>>a[i].c;
    }
    int sumg=0;
    int sums=0;
    int sumc=0;
    for(int i=0;i<n;i++){
        sumg+=a[i].g;
        sums+=a[i].s;
        sumc+=a[i].c;
        
    }
    sum=sumg+sums+sumc;
    cout<<sumg<<" "<<sums<<" "<<sumc<<" "<<sum;
    return 0;
}