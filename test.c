






#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "src/fuckmem.h"

int main(void){
    
    char *hello;

    hello = (char *)fuckmem( 22 * sizeof(char));
    int *goodbye = (int *)fuckmem(43 * sizeof(int));
    hello[0] = 'h';
    goodbye[0] = 'f';
    printf("%s\n", hello);
    printf("%s\n", goodbye);
    freeish(hello);
    freeish(goodbye);


    return 0;
}
