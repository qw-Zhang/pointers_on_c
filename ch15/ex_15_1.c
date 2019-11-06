#include<stdio.h>

#define MAX 80

int main(void)
{
    int temp = 0;
    while((temp = fgetc(stdin)))
        fputc(temp,stdout);
    return 0;
}
