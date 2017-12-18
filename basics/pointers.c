#include <stdlib.h>
#include <stdio.h>

int main () {

    int *pi, *pk, r;

    int i = 5;
    int k = 7;

    pi = &i;
    pk = &k;
    r = *pi + *pk;


    printf("&p = %p\n", (void *)pi);
    printf("p = %d\n", *pi);
    printf("r = %d\n", r);
    
    return -11;
}

