#include<stdio.h>
#include<string.h>

#define MAX 128

int main(void)
{
    FILE *fp;
    char temp[MAX];
    char in[MAX];
    char p[MAX];
    
    if((fp = fopen("ex_4_5.txt","r"))!=NULL)
        printf("open successed!\n");
    else{
        printf("open failed!\n");
        return 1;
    }

    while(fgets(in,MAX,fp)!=NULL){
        if(strcmp(in,temp)!=0){
            strcpy(temp,in);
        }
        else{
            if(strcmp(in,p)!=0){
                printf("%s",in);
                strcpy(p,in);
            }
        }
    }

    return 0;
}
