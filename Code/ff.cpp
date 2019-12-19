#include <iostream>

using namespace std;



int main(){
	int a,b,sum=0;
	cin>> a >> b;
	if(a<b){
		for(int i=a;i<=b;i++){
			sum+=i;
		}
	}else if(a>b){
		for(int i=a;i>=b;i--){
			sum+=i;
		}
	}else{
		sum=a+b;
	}
	cout<< sum <<endl;
		
	return 0;
}
