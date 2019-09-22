#include<stdio.h>

void written_amount(unsigned int amount, char *buffer);

int main(void)
{
    unsigned int num;
    char buf[1000];
    while(
    scanf("%d",&num)!=NULL) 
        written_amount(num,buf);
    return 0;
}

void written_amount(unsigned int amount, char *buffer)
{
    int bit_num = 0;
    unsigned int temp;
    temp = amount;
    while(temp > 0){
        bit_num++;
        temp/=10; 
    }
    int dot_num = bit_num / 3;

}


