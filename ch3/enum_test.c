#include<stdio.h>
#include<stdlib.h>
int main(void)
{   

    enum Liqud{PINT = 16,Q = 32};
    enum Liqud jar;
    jar = Q;
    printf("%d\n",jar);

    jar = jar + PINT;

    printf("%d\n",jar);

    return EXIT_SUCCESS;
}
