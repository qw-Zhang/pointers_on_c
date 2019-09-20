#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int max_list(int values, ...);

int main(void)
{
    int n,m,i,k,j;
    scanf("%d %d %d %d %d",&i,&j,&k,&n,&m);
    int res = max_list(i,j,k);
    printf("%d\n",res);
    return 0;
}

int max_list(int values, ...)
{
    va_list var_arg;
    int max = 0;
    va_start(var_arg, values);
    int temp = va_arg(var_arg,int);
    while(temp >= 0){
        if(temp>max)
            max = temp;
        temp = va_arg(var_arg, int);
    }
    va_end(var_arg);
    return max;
}
