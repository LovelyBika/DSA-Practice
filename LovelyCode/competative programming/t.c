#include <stdio.h>

#include <limits.h>>>

int main(int argc, char** argv) {

int a = 625;



signed int b (unsigned int)a; 

unsigned int c=a<<b;



signed int d=a>>c;

printf("%x\n",a);



printf("%d",d);



printf("%u\n", (unsigned int) UINT_MAX);

return 0;
}