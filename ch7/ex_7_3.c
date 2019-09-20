#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ascii_to_integer(char *string);
int isA(char c);
int main(void)
{
    char str[101];
    char c = 1;
    while(fgets(str,100,stdin)!=NULL){
        int result = ascii_to_integer(str);
        printf("%d\n",result); 
    }
    return EXIT_SUCCESS;
}

int ascii_to_integer(char *string)
{
    int num = 0;
    int len = strlen(string);
    for(int i = 0;i < len-1;i++){
        int temp = isA(string[i]);
        if(temp) 
            num = num*10 + temp;
        else
            return 0;
    }
    return num;
}

int isA(char c)
{
    if(c <= '9'&& c >= '0')
        return c - '0';
    else
        return 0;
}
