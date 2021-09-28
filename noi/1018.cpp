#include<bits/stdc++.h>

using namespace std;

int main(){
    float x,t;
    cin>>x;
    if(x<=0.5&& x>0){
        t=3.0;
        printf("%.f",t);
    }else if(x>0.5){
        t=(x-0.5)/0.2+3;
        printf("%.f",ceil(t));
    }else
        return -1;
    return 0;
}