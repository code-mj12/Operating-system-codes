#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
	
	string s1 = argv[1];
	
	cout << "------ Adding 2 in ascii -----";
	
	for(int i=0; s1[i]!='\0'; i++) {	
		cout << char(int(s1[i])+2);		
	}

	cout << endl;
	
	return 0;	
}
