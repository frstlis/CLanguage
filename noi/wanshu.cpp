#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,n,su;
    int a[1000]{0};
    cin>>n;

    for(i=1;i<n;i++){
        su=0;
        k=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                su+=j;
                a[k]=j;
                k++;
            }
        }
        if(i==su){
            printf("%lld  ",i);
            for(int m=0;m<k;m++)
                printf("%d ",a[m]);
            cout<<endl;
        }
    }
    return 0;
}
