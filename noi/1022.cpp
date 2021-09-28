#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int age[100];
    double sum{0.0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>age[i];
        sum+=age[i];
    }
    printf("%.2lf",sum/n);
    return 0;

}