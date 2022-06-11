#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

using namespace std;

int main(void) {


	char s1[100] = {'\0'};
	
	cout << "Enter string: ";
	
	cin >> s1	;
		
	pid_t pid1 = fork();
	
	if(pid1>0) {
	
		wait(NULL);
		
	}
	else if(pid1==0) {	

		pid_t pid2 = fork();
		
		if(pid2>0) {
			
			execl("./reverse","./reverse",s1,NULL);
			wait(NULL);
		}
		else if(pid2==0) {
			
			pid_t pid3 = fork();
			
			if(pid3>0) {
				execl("./length","./length",s1,NULL);
				wait(NULL);
			}
			else if(pid3==0) {
				
				pid_t pid4 = fork();
				
				if(pid4>0) {
					execl("./ascii","./ascii",s1,NULL);
					wait(NULL);
				}
				else if(pid4==0) {
					
					pid_t pid5 = fork();
					
					if(pid5>0) {
						execl("./sorted","./sorted",s1,NULL);
						wait(NULL);
					}
					else if(pid5==0) {
						execl("./capitalize","./capitalize",s1,NULL);
						
					}
										
				}				
				
			}
			
		}	
		
	}
	


	return 0;
}
