#include<bits/stdc++.h>

using namespace std;
struct {
    int x;
    int y;
}a[12];

int main(){
    int n;
    int sum=0;
    cin>>n;
    int i=0;
    while(n){
        a[i].x=n%10;
        a[i].y=n/10;
        n=a[i].y;
        i++;
    }
    for(int j=0;j<i;j++){
        sum+=a[j].x;
    }
    printf("%d\n",sum);

    return 0;
}