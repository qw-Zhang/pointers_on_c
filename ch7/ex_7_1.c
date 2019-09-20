#include<stdio.h>
#include<stdlib.h>

int hermite(int n,int x);

int main(void)
{
    int a = 3,b = 2;
    int result = hermite(a,b);
    printf("%d\n",result);
    return EXIT_SUCCESS;
}

int hermite(int n,int x)
{
    if(n <= 0)
        return 1;
    if(n == 1)
        return 2*x;
    return 2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x);

}
