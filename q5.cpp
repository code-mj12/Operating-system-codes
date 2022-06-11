#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main(int argc, char* argv[]) {

	
	pid_t pid1 = fork(); 
	
	if(pid1>0) {
		wait(NULL);
		
		pid_t pid2 = fork();
		
		if(pid2>0) {
			wait(NULL);
		}
		else if(pid2==0) {
			execl("/bin/wc", "wc", argv[1], NULL);
		}
		
		
	}
	else if(pid1==0) {
		execl("/bin/cat", "cat", argv[1], NULL);
		
	}

	return 0;
}


