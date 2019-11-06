#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 81

int main(void)
{
    printf("please input two filenames:\n");
    char temp[81];
    //fgets(temp,MAX-1,stdin);
    gets(temp);
    FILE *f_in;
    if((f_in = fopen(temp,"r"))==NULL){
        perror("open reading file fail\n");
        return EXIT_FAILURE;
    }
    gets(temp);
    FILE *f_out;
    if((f_out = fopen(temp,"w"))==NULL){
        perror("open writing file fail\n");
        return EXIT_FAILURE;
    }

    while((fgets(temp,MAX-1,f_in)!=0))
        fputs(temp,f_out);
    printf("done\n");
    return 0;
}
