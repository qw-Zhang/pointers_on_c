#include<stdio.h>

int main(void)
{
    extern int a = 1000;
    printf("%d\n",a);
    return 0;
}
