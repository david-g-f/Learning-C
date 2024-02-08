#include <stdio.h>
#include <stdlib.h>
#define MAXR 100
#define MAXC 100

void readMatrix(FILE* fin, int M[][MAXC], int m, int n){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            fscanf(fin, "%d", &M[i][j]);
        }
    }
}

void writeMatrix(FILE *fout, int M[][MAXC], int m, int n){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            fprintf(fout, "%d", M[i][j]);
        }
        putc("\n", fout);
    }
}

void matrixProd(int M1[][MAXC], int M2[][MAXC], int M3[][MAXC], int m, int n){
    int i, j, k;
    for(i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            for(k = 0; k < n; k++){
                M3[i][j] = M1[i][j] * M2[i][j];
            }
        }
    }
}

int main(int argc, char ** argv){}