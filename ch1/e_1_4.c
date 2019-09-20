#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

int main(void)
{
    char str[MAX];
    char str_long[MAX];
    int len,len_temp;
    FILE *fd;
    char filename[] = "test.txt";
    if((fd = fopen(filename,"r"))!=NULL)
        printf("Open successed\n");
    else{
        printf("Open failed\n");
        return EXIT_FAILURE;
    }
    
    len = 0;
    while(fgets(str,MAX,fd)){
        len_temp = strlen(str);
        if(len_temp > len){
            len = len_temp;
            strncpy(str_long,str,MAX);
        }
    }
    printf("%s\n",str_long);

    return EXIT_SUCCESS;
}
