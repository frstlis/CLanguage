#include<bits/stdc++.h>

using namespace std;

int main(){
    float w;
    cin>>w;
    if(w>30)
        printf("Fail");
    else if(w>20)
        printf("%.2f",10*(0.8+0.75)+(w-20)*0.7+0.2);
    else if(w>10)
        printf("%.2f",10*0.8+(w-10)*0.75+0.2);
    else 
        printf("%.2f",w*0.8+0.2);
    return 0;
}