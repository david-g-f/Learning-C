#include <stdio.h>

/* Notes for week 3*/

void swap(int a, int b){
    // Two methods, temp variable or arithmetic
    printf("A before: %d\n B before: %d\n", a, b);
    int temporary;
    temporary = a;
    a = b;
    b = temporary;
}

void doubler(int *a){
    // Using pointers to our advantage
    *(a) *= 2;
}

int main(int argc, char *argv[]){
    int i;
    i = 50;
    int *ptr = &i;
    printf("Value of the memory address at pointer: %d\n", *(ptr));
    doubler(ptr);
    printf("Value of i according to the pointer: %d\n", *(ptr));
}