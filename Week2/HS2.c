#include <stdio.h>

/* Notes for lecture 2

---PLACEHOLDERS
%d / %i == decimal integer 
%f == float
%x == hex
%s == string
%p == memory address
---ADDRESS OPERATOR: &
Locates the address of a given variable in the memory.
--- STAR!!!!: *
Goes to a specific memory location and grabs whatever is in it. Fetcher
*/
#define Old 29;

int isOld(age){
    return age > Old;
}

int main(int argc, char* argv[]){
    int age;
    printf("How old are you? ");
    scanf("%d", &age);
    if (isOld(age)){
        printf("%d is old.",age);
    }
    else{
        printf("%d is still young! Yay!", age);
    }
}
