#include<stdio.h>

void set_bit(char bit_array[],unsigned bit_number);
void clear_bit(char bit_array[],unsigned bit_number);
void assign_bit(char bit_array[],unsigned bit_number,int value);
int test_bit(char bit_array[],unsigned bit_number);

int main(void)
{
    char bit_array[100];
    unsigned int num,cc;
    int value;
    scanf("%s %d %d",bit_array,&num,&cc);
    switch(cc){
        case 1:
            set_bit(bit_array,num);
            break;
        case 2:
            clear_bit(bit_array,num);
            break;
        case 3:
            scanf("%d",&value);
            assign_bit(bit_array,num,value);
            break;
        case 4:
            int a = test_bit(bit_array,num);
            printf("%d\n",a);
            break;
    }

    printf("%s\n",bit_array);

    return 0;
}

void set_bit(char bit_array[],unsigned bit_number)
{
    for(int i = 0;i < bit_number;i++){
        
    }
}
