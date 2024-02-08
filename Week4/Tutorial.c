#include <stdio.h>
#include <stdlib.h>

struct person{
    char *name;
    int age;
    float height;
};

int main(int argc, char *argv[]){
    struct person *chris; //memory pointer to an object of type person
    chris = (struct person*) malloc(sizeof(struct person)); //dynamically allocate a block of memory of person size bytes, then sculpt it to a struct person pointer
    chris->name = "Chris";
    chris->age = 17;
    chris->height = 1.75;

printf("Chris name: %s\n",chris -> name);
printf("Chris age: %d\n", chris -> age);
printf("Chris height: %.2f\n", chris -> height);
}
