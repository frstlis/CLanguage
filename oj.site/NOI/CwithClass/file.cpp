#include <iostream>
#include <fstream>
#include <ofstream>
#include <string>
int main()
{
	ofstream outfile( "test.txt" );
	ifstream infile( "text.txt" );
	if ( ! infile ) {
		cerr << "error: unable to open input file!\n";
		return -1;
	}
	if ( ! outfile ) {
		cerr << "error: unable to open output file!\n";
		return -2;
	}
string word;
while ( infile >> word )
	outfile << word << ' ';
return 0;
}
