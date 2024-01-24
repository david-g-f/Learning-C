#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 50;
    printf("Memory address reserved for variable i: %p", &i);
    printf("\nValue stored at the aforementioned memory address: %d\n", *(&i));
}
