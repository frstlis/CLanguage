#include "iostream"

using namespace std;

long long  recursion(int n){
    long long x;
    if(n>1){
        x=recursion(n-1)*n;
    }else
    {
        x=1;
    }
    return x;
}

int main(){
    int n;
    long long x;
    while(1){
        cout<<"Please Input :";
        cin>>n;
        if(n<0){
            cout<<"Error,Please Input Again: "<<endl;
            continue;
        }
        else{
            x=recursion(n);
            cout<<n<<"!  is : "<<x<<endl;
		}
		
    }
    return 0;
}
