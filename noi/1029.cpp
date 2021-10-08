#include <bits/stdc++.h>
using namespace std;

int main()
{
	string data;
	int i{0};
	cin>>data;
	
	while(data[i])
	{
		if(data[i]>='a' && data[i]<='z')
		{
 			putchar((data[i] - 'a' + 3)%26 + 'a');
		}
		else if(data[i]>='A' && data[i]<='Z')
		{
			putchar((data[i] - 'A' + 3)%26 + 'A');
		}
		else
			putchar(data[i]);
		i++;
	}
	return 0;
}