#include<stdio.h>
#include<string.h>
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
    int r_num = bit_num % 3;
    char str_dot[3][100] = {{"HUNDRED"},{"THOUSAND"},{"MILLION"}};
    char str_sec_num[9][100] = {{"TENTY"},{"TWENTY"},{"THIRTY"},{"FOURTY"},{"FIVTY"},{"SIXTY"},{"SEVENTY"},
                                {"EIGHTY"},{"NINTY"}};
    char str_num[9][100] = {{"ONE"},{"TWO"},{"THREE"},{"FOUR"},{"FIVE"},{"SIX"},{"SEVEN"},{"EIGHT"},{"NINE"}};
    temp = amount;
    int ttt = 0;
    for(int i = 0;i < dot_num;i++){
        ttt = temp%10;
        if(ttt>0)
            str_temp = str_num[ttt];
        
    } 
}


