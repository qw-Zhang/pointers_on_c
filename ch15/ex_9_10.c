#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX 100

int palindrome(char *string);
void turn_std(char *dst,char *src);

int main(void)
{
    char str[MAX];
    fgets(str,MAX,stdin);
    char *dst = (char *)malloc(sizeof(char)*strlen(str));
    turn_std(dst,str);
    if(palindrome(dst))
        printf("true\n");
    else
        printf("false\n");
    return 0;
}

int palindrome(char *string)
{
    int len = strlen(string);
    int tail = len,i = 0;
    int lim = len/2;
    while(i < lim){
        if(*(string + i) != *(string + tail - 1))
            return 0;
        else{
            i++;
            tail--;
        }
    }
    return 1;
}

void turn_std(char *dst,char *src)
{
    char *temp = src;
    int judge = 0;
    while((*temp) != 0){
        if(isalpha(*temp)){
            *dst = toupper(*temp);
            dst++;
        }
        temp++;
    }
    *dst = 0;
}
