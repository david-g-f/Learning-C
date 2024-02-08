#include <stdio.h>
#include <stdlib.h>

/*  Notes for Lecture 5
    Linked Lists, Binary Trees, and 2D Arrays.

    Recursive structures - Linked lists in which each "node" has a pointer to the next node.

*/

struct freq
{
    int ch; //ascii code
    int count;
    struct freq *next; //points to the next element
};

struct freq *fp; //initial or root node

void incFreq(int ch){
    struct freq *f;

    if(fp==NULL)
    {
        fp = (struct freq*) malloc(sizeof(struct freq)); //dynamically allocate a memory space, then create a pointer routing to that space.
        fp->ch = ch;
        fp->count = 1;
        fp->next = NULL;
        return;
    }

    f = fp;
    while (1)
    {
        if(f-> ch == ch)
        {
            f -> count = f->count + 1;
            return;
        }

        else
        {
            if(f->next == NULL)
            {
                //smth
            }
            else
            {
                //smth
            }
        }
    }
}

void showFreq(){
    struct freq *f;
    f = fp;
    while(f != NULL){
        
    }
}

int main(int argc, char ** argv){
    int i;
    char *text;
    text = "aaAABBb";
    i = 0;

    while(text[i] != '\0')
    {
        incFreq(text[i]);
        i += 1;
    }

    showFreq();
    freeFreq();

}