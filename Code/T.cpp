#include <iostream>

using namespace std;

int ans,n;

void dfs(int i,int sum){
	if(i==n+1){
		if(sum==100) ans++;
		return;
	}
	for(int j=0;j<=100;j++) dfs(i+1,sum+j);
}

int main(){
	cin>>n;
	dfs(1,0);
	cout<<ans;
	return 0;
}
