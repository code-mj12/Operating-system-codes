#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
	
	string s1 = argv[1];
	
	cout << "------Capitalize------ ";
	
	for(int i=0; s1[i]!='\0'; i++) 
	{
		if(int(s1[i])>=97 && int(s1[i])<=122) 
		{
			cout << char(int(s1[i])-32);		
		
		}
		else {
			cout << s1[i];
		}
	}
}
