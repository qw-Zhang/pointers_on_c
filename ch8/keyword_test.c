#include"keyword.h"
#include<stdio.h>

char const *keyword[] = {
    "do",
    "for",
    "if",
    "register",
    "return",
    "switch",
    "which"
};

#define N_KEYWORD (sizeof(keyword)/sizeof(keyword[0]))

int main(void)
{
    char *desire ="which";
    int p = lookup_keyword(desire,keyword,N_KEYWORD);
    printf("%d\n",p);
    return 0;
}
