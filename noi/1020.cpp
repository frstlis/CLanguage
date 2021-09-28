#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t,h,d,u;
    cin>>n;
    if(n<10000&&n>=0){
        t=n/1000;
        h=n%1000/100;
        d=n%1000%100/10;
        u=n%1000%100%10;
    }
    if(t>0){
        printf("%d\n",4);
        printf("%d\n%d\n%d\n%d\n",t,h,d,u);
    }else if(t==0&& h>0){
        printf("%d\n",3);
        printf("%d\n%d\n%d\n",h,d,u);
    }else if(t==0&& h==0&&d>0){
        printf("%d\n",2);
        printf("%d\n%d\n%d\n",d,u);
    }else if(t==0&& h==0&&d==0&&u>0){
        printf("%d\n",1);
        printf("%d\n%d\n",u);
    }else
        return -1;
    return 0;        
}