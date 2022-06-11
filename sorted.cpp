#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
	
	string s1 = argv[1];
	
	cout << "-----Sorted-----" ;
	
	sort(s1.begin(),s1.end());
	
	cout << s1 << endl;	

	return 0;
}
