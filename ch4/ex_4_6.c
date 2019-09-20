#include<stdio.h>
#include<string.h>

int substr(char dst[], char str[], int start, int len);

int main(void)
{
    char dst[100] = "";
    char src[100];
    if(dst!=NULL)
        if(strlen(dst)==0)
            printf("dst is empty.\n");
    int start,len;

    //scanf("%s %d %d",src,&start,&len);
    scanf("%s",src);
    scanf("%d",&start);
    scanf("%d",&len);
    int len_dst = substr(dst,src,start,len);
    printf("%s\n%d\n",dst,len_dst);
    return 0;
}

int substr(char dst[], char src[], int start, int len)
{
    int len_str = strlen(src);
    if(start > len_str || start+len > len_str || start < 0 || len < 0){
        dst = "";
        return 0;
    }
    
    int j = 0;
    for(int i = 0; i < len;i++){
        dst[j++] = src[start + i];

    }
    dst[j] = 0;
    return j;
}
