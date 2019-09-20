#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int main(void)
{
    char in[MAX];
    signed char checksum = -1;
    int num = 0;
    char temp;
#if 0
    while(num < MAX && scanf("%c",&temp)){
        in[num++] = temp;
        checksum += temp;
    }
    in[num] = '\0';
#endif

#if 0
    gets(in);
    while(in[num]!='\0'){
        checksum += in[num++];
    }
    checksum += '\0';
    puts(in);
    printf("%d\n",checksum);
#endif

    while((temp = getchar())!= EOF){
        putchar(temp);
        in[num++] = temp;
//        checksum += temp;
    }
    in[num] = '\0';
    for(int i = 0;i < num;i++){
        checksum += in[i];
    }

    printf("%d\n",checksum);
    return EXIT_SUCCESS;
}
