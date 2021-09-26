#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y;
    x=n%123;
    y=n%91;
    if(x>=97 && x<=122)
        putchar(x);
    else if(y>=65 && y<=90)
        putchar(y);
    else 
        printf("*");
    return 0;
}