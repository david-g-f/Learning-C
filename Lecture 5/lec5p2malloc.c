#include <stdio.h>
#include <stdlib.h>

// --Important for coursework
/*
    --
*/

int *makeVector(int n){
    return (int *)malloc (n*sizeof(int));
}

int **makeMatrix(int col, int row){
    int **newMatrix = (int **)malloc(col * sizeof(int *));
    int i;
    for (i = 0; i < col; i++){
        newMatrix[i] = makeVector(row);
    }
    return newMatrix;
}

int main(int argc, char ** argv){}