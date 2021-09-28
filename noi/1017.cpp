#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<"[1] apples\n[2] pears\n[3] oranges\n[4] grapes\n[0] Exit\n";
    int n;
    cin>>n;
    switch(n){
        case 1: printf("price=%.1f",3.00);break;
        case 2: printf("price=%.1f",2.50);break;
        case 3: printf("price=%.1f",4.10);break;
        case 4: printf("price=%.1f",10.20);break;
        case 0: break;
        default : printf("price=0"); break;
    }
    return 0;
}