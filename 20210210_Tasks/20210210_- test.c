#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n){
    if(allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp - n;
    }else
        return NULL;
}
char afree(char *p){
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
    allocp = p;
}


char *our_strdup(char *s){
    char *dups, *t;
    dups = alloc (strlen(s) + 1);
    if(!dups)return NULL;
    for (t = dups; *s; )
        *t++ = *s++;
    *t = *s;
    return dups;
}

int main(void){
    char *sdup;
    char str[] = "miro's dup";
    sdup = our_strdup(str);
    if(!sdup){
    printf("Out of memory");
    return 1;
    }
    printf("%s\n", sdup);
    afree(sdup);
    return 0;
}


char *my_strdup(char *s){
    char *dups, *t;
    dups = (char *)malloc (strlen(s) + 1u);
    if(!dups)return NULL;
        for (t = dups; *s; )
            *t++ = *s++;
        *t = *s;
    return dups;
}