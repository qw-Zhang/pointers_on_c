#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void deblank(char str[]);

int main(void)
{
    char str[100];
//    char dst[100];
   // gets(str);
    fgets(str,100,stdin);

    deblank(str);
//    printf("%p\n",dst);
    printf("%s",str);
    printf("%d\n",0%4);
    return 0;
}

void deblank(char str[])
{
    int j = 0,flag = 0;
    int len = strlen(str);
    printf("%d\n",len);
//    char *temp = (char *)malloc(len*sizeof(char));
    char *temp = str;
    for(int i = 0;i < len;i++){
        temp[j++] = str[i];
        if(str[i]==' '){
            flag = i;
            while(str[flag]==' ')
                flag += 1;
            i=flag-1;
        } 
        
    } 
    temp[j] = '\0';
    printf("%p\n",temp);
    

}
