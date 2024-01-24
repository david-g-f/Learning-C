#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    /* TODO: read integer as an int into i */
    printf("Enter a number. ");
    scanf("%d", &i); //whatever value the user inputs is stored into the memory block inhabited by i 

    int smallest = i;
    int largest = i;

    /* TODO: loop forever until '0' is typed in */
    while (1) {
        if (*(&i) > 2147483647 || *(&i) < -2147483648){ //dealing with extremities
            printf("Input number is too large. Exiting...");
            break;
        }

        if (*(&i) == 0){ //termination case
            printf("0 entered. Terminating...");
            break;
        }
        /* TODO: if new number is smaller than smallest, update smallest */
        if (*(&i) < *(&smallest)){
            smallest = i;
        }
        /* TODO: if new number is larger than largest, update largest */
        if (*(&i) > *(&largest)){
            largest = i;
        }
        /* TODO: read the next number as an int into i */
        printf("\nEnter a new number. ");
        scanf("%d", &i);
    }

    printf("smallest: %d, largest: %d\n", smallest, largest);

    return 0;
}
