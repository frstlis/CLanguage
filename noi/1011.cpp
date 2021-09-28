#include<bits/stdc++.h>

using namespace std;

int main(){
    float x,y;
    cin>>x>>y;
    //if((x>=-1 && x<=1) && (y>=-1 && y<=1))
    if(fabs(x)<=1 && fabs(y)<=1)
        printf("Yes");
    else
        printf("No");
    return 0;
}