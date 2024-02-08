#include <stdio.h>
#define BYTE0 0x000000ff
#define BYTE1 0x0000ff00
#define BYTE2 0x00ff0000
#define BYTE3 0xff000000
#define BIT0 0x00000001

/* --Masking
    Using logical operators to extract certain bytes from a given variable.
    e.g word = 0x64636261
    word & BYTE0 = 61
    word & BYTE1 = 6200 etc.

    --Shifting
    Essentially traversing a given value using bit operations.
*/

int main(int argc, char *argv[]){
    int word;
    word = 0x64636261;
    int i;
    for (i = 0; i < 4; i++){
        printf("%8x: %c\n", word & 0x000000ff, word & 0x000000ff);
        word = word >> 8;
    }

    int n;
    int x;
    printf("Enter value>");
    scanf("%d", &n);
    for(x = 31; x>=0; x--){
        printf("%3d")
    }

}