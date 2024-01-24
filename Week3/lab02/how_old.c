#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int current_year = (time(NULL) / 31536000) + 1970; //time since the epoch in seconds converted to years then added onto 1970
    int birth_year;
    int had_birthday;           /* used as boolean */

    /* TODO: ask what year the user was born in */
    printf("What year were you born in? ");
    scanf("%d", &birth_year);
    /* TODO: ask whether the user has had their birthday yet this year */
    printf("Did you have your birthday already? 0 for false and 1 for true. ");
    scanf("%d", &had_birthday);
    /* TODO: compute and display the user's age */
    birth_year = current_year - birth_year;
    if (had_birthday == 0){
        birth_year -= 1;
    }
    printf("Your age in years is: %d\n", birth_year);
    return 0;
}
