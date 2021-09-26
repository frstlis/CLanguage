#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
        printf("NO\n");
    else if(a==b&&b==c)
        printf("Equilateral\n");
    else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        printf("Right\n");
    else
        printf("General\n");
    return 0;

}