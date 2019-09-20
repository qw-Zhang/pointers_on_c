#include<stdio.h>
#include<stdlib.h>
#include"strlen.h"


int main(void)
{
    char ss[100] = "hello";

    int len = strlen(ss);
    printf("%d\n%s\n",len,ss);

    return EXIT_SUCCESS;
}
