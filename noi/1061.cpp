#include <bits/stdc++.h>

using namespace std;

int main ()
{
	string s,a = "NOIP@CCF";
	char c;
	cin >> c;
	while (c != 'N') {
		cin >> s;
		if (s == a) {
			cout << "Success" << endl;
			exit(0);
		}
		else
			cout << "Sorry" << endl;
		cin >> c;
	}
	return 0;
}