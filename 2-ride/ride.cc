/*
ID: x65lin1
PROG: ride
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int number(string str){
	int result = 1;
	char lastChar = ' ';
	for (int i = 0; i< str.length(); i++){
		lastChar = str.at( str.length() - 1 -i );
		result *= ((int)lastChar-64);
	}
	return result;
}

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string group, comet;
    fin >> group >> comet;
    int groupint = number(group);
    int cometint = number(comet);
    if (groupint%47 == cometint%47)
    	fout << "GO" << endl;
    else
    	fout << "STAY" << endl;
    return 0;
}

