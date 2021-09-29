/* #include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    long int a[17][17];
    long int sum[17]={0};
    long int s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            sum[i]+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<sum[i]<<" ";
        s += sum[i];
    }
    cout<<s;
    return 0;
} */

#include <iostream>
using namespace std;

struct day{
	int g;
	int s;
	int c;
}; 

int main (){
	
	int counter;
	cin >> counter;
	day a[counter];
	
	for (int i = 0; i < counter; i++) {
		cin >> a[i].g >> a[i].s >> a[i].c;
	}
	
	int sumg = 0;
	int sums = 0;
	int sumc = 0;
	int sumall = 0;
	
	for (int i = 0; i < counter; i++) {
	    sumg+=a[i].g;

		sums+=a[i].s;

		sumc+=a[i].c;

		sumall = sumall + a[i].g + a[i].s + a[i].c;

	} 
	
	cout << sumg << " " << sums << " " << sumc << " "<< sumall; 
	return 0;
}