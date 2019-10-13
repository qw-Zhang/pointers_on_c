#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char* buffer = malloc(sizeof(char)*1);  //the answer char* buffer = NULL; has problem. buffer shouldn't be a NULL pionter, at least it has one of char size size.
    int buf_size = 1;
    char* buf_cp;    //it use to be a copy of buffer and as a temp of buffer's tail
    buf_cp = buffer;
    char temp;
    int len = 0;
    do{
//        temp = fgetc(stdin);
        temp = getchar();
        if('\n' == temp || EOF == temp)
            temp = 0;
        
        if(len >= buf_size){
            buf_size *= 2;
            buffer = realloc(buffer,buf_size);
            if(buffer == NULL)
                return EXIT_FAILURE;
            buf_cp = buffer + len;
        }
        *buf_cp++ = temp;
        len++;
    }while(temp != 0);

    //copy the buffer to buf_cp
    buf_cp = malloc(len*sizeof(char));
    if(NULL == buf_cp)
        return EXIT_FAILURE;
    strcpy(buf_cp,buffer);
    printf("%s\n",buf_cp);
    return 0;
}
