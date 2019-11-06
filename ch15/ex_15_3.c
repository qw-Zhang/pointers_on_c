#include<stdio.h>
#include<stdlib.h>

#define MAX 81

int main(void)
{
    char* temp[81];
    while((fgets(temp,MAX-1,stdin)!=0))
        fputs(temp,stdout);
    free(temp);
    printf("done\n");
    return 0;
}
