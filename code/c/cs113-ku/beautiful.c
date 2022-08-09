#include <stdio.h>
#include <unistd.h>

int main()
{  int i;

   for (i=0; i < 1000; i++) {
       printf("%c", (i/40)%2 ? '\b':' ');
       fflush(stdout);
       usleep(1000);
   }
}