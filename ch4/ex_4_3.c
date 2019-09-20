#include<stdio.h>
#include<string.h>
#define MAX 10

void copy_n(char dst[],char src[], int n);

int main(void)
{
    char *src = "45678901";
    char dst[MAX];

    copy_n(dst,src,10);
    printf("%d\n",strlen(dst));
    printf("%s",dst);

    return 0;
}

void copy_n(char dst[],char src[], int n)
{
    int j = 0;
    for(int i = 0;i < n;i++){
        if(src[j] != 0){
            dst[i] = src[j];
            j++;
        }
        else{
            dst[i] = src[j];
        }
    }

}
