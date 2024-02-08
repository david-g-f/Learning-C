/* --Notes for week 4
    sizeof(variable) gives the bytes occupied by the given variable parameter
    character pointer points to a memory location, but is casted to a pointer (one byte)

*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int x;
    char *c1;
    x = 0x43125672;
    c1 = (char *) &x;
    printf("%x %x %x %x \n",c1[0], c1[1], c1[2], c1[3]);
}