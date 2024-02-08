#include <stdio.h>
#include <stdlib.h>

/* --Notes  
    FILE - variable type for files.
    argc == number of command line arguments
    argv == char array of arguments
    fopen(path, type)
*/

void copy(FILE *In, FILE *Out){
    int ch;
    ch = getc(In);
    while(ch != EOF){
        putc(ch, Out);
        ch = getc(In);
    }
}

int main(int argc, char *argv[]){
    FILE *fileIn, *fileOut;
    fileIn = fopen("mando.txt","r");
    fileOut = fopen("newmando.txt", "w");

    if(fileIn == NULL){
        printf("No file detected");
        exit(0);
    } 

    if(fileOut == NULL){
        printf("Womp womp");
        exit(0);
    }

    copy(fileIn, fileOut);

    fclose(fileIn);
    fclose(fileOut);
}