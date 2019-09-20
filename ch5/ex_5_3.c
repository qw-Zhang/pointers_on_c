#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bits(unsigned int value);

int main(void)
{
    unsigned int a = 25,b;
    
    b = reverse_bits(a);
    printf("%ld\n",b);

    return EXIT_SUCCESS;
}

unsigned int reverse_bits(unsigned int value)
{
    unsigned int temp;
    for(unsigned int i = 1;i != 0; i<<=1){
        temp <<= 1;
        if(value&1){
            temp|=1; 
        }
        value>>=1; 
    }
    return temp;
}

