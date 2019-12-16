#include <iostream>

#include <math.h>

using namespace std;

double hellen(float a,float b,float c){

	float p;
	double s;
	if((a+b)>c && (a+c)>b && (b+c)>a)
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}else
	{
		return 0;
	}
}

int main(){
	
	float x,y,z,s;
	cin>> x>> y >> z;
	s=hellen(x,y,z);
	cout<< s<< endl;
	return 0;
}
