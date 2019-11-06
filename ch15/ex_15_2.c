#include<stdio.h>
#include<stdlib.h>

#define MAX 81

int main(void)
{
    char temp[MAX];
    while((fgets(temp,MAX-1,stdin)!=0))
        fputs(temp,stdout);
    printf("done\n");
    return 0;
}
