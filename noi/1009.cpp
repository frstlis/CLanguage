#include <bits/stdc++.h>

using namespace std;

int main(){
	int male,female;
	
	cin>>male>>female;
	
	if(male+female<10)
		cout<<"water"<<endl;
	else if(female>=male)
		cout<< "tea"<<endl;
	else
		cout<< "tree"<<endl;
		
	return 0;
}