#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[1000]={0};
    int ma{0},mi{1000};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ma=max(a[i],ma);
        mi=min(a[i],mi);
    }
    // max=a[0];
    // min=a[0];
    // for(int j=0;j<n;j++){
    //     if(max<=a[j])
    //         max=a[j];
    //     if(min>=a[j])
    //         min=a[j];           
    // }
    printf("%d",ma-mi);
    return 0;
}