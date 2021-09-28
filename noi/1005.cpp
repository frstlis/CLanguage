#include <bits/stdc++.h>
using namespace std;
int main(){
    float r,x,p,y;
    cin>>r>>x>>p;
    y=x*pow(((100+r)/100),p);
    printf("%.2f",y);
    return 0;
}