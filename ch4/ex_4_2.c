#include<stdio.h>
#include<math.h>

int isPrime(int a);
int isPrime_1(int a);

int main(void)
{
    for(int i = 1;i < 100;i++){
        if(isPrime_1(i)>0)
            printf("%d ",i);
    }

    printf("\n");
    return 0;
}

int isPrime(int a)
{
    if(a==1)
        return 1;
    for(int i = 2;i < a;i++){
        if((a%i)==0){
            return 0;
        }
    }
    return 1;
}

int isPrime_1(int n)
{
    if(n<3)
        return n > 1;
    for(int i = 2;i<sqrt(n);i++ ){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
