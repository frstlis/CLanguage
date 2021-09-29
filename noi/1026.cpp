#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int ma=a[0];
    int mi=a[0];
    int sum=0;
    double aver=0;
    for(int i=0;i<10;i++){
        if(ma<=a[i])
            ma=a[i];
        if(mi>=a[i])
            mi=a[i];
    }
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    aver=(sum-ma-mi)/8.0;
    printf("%.3f",aver);
    return 0;
}