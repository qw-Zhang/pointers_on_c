#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 101

int main(void)
{
    char *key = "the";
    char str[MAX];
    fgets(str,MAX-1,stdin);
    char *temp = str;
    int len = strlen(str);
    int i = 0,count = 0,j = 0;
    char temp_cmp[4];
    while(i < len){
        for(j = 0;j < 3; j++){
            temp_cmp[j] = *(temp + i + j);
        }
        temp_cmp[4] = 0;
        if(0 == strcmp(temp_cmp,key)){
            count++;
            i += 3;
        }else{
            i++;
        }
    }
    printf("%d\n",count);
    return 0;
}
