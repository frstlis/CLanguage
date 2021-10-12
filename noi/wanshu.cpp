#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,su,a[]{0};
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
            cout<<i<<" ";
            for(int m=0;m<=k;m++)
                cout<<a[m]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}
