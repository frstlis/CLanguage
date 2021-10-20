#include <iostream>
#include <iomanip>
int main(){
	static int i=9;
	//printf("\n%d\n%d\n%d\n%d",++i,--i,i++,i--);
	std::cout<<(++i)<<"\n";
	std::cout<<(--i)<<"\n";
	std::cout<<i++<<"\n";
	std::cout<<i--<<std::endl;
	std::cout<<i<<std::endl;
	int j=39999;
	std::cout<<std::fixed<<std::setprecision(4)<<j<<std::endl;
	return 0;
	}
