#include<stdio.h>

int main(void)
{
#if 0
    int a = 40,b = 1;
    double c = 4;
    printf("%ld\n",sizeof(c=b+1));
    printf("%lf\n",b/c); 
#endif
    
    char buf[100];

    int temp = 'a' - 'A';
    while(fgets(buf,99,stdin)!=NULL){
        int i = 0;
        while(buf[i]!=0){
            if(buf[i]>='A' && buf[i] <='Z')
                buf[i] += temp;
            i++;
        }
        printf("%s",buf);
    } 
    
    return 0;
}
