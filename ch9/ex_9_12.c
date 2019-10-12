/*
   This C source file include ex_9_12,13,14 three questions
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int prepare_key(char *key);
void del_repeat(char *key);
int isfind(char *res,char key_char,int n);
void encrypt(char *data,char const *key);
void decrypt(char *data,char const *key);

int main(void)
{
    char key[28];
    fgets(key,27,stdin);
    if(!prepare_key(key)){
        perror("key is disorder.\n");
        return 1;
    }
    printf("%s\n",key);
    
    char data[101];
    fgets(data,100,stdin);
    encrypt(data,key);
    printf("%s\n",data);
    decrypt(data,key);
    printf("%s\n",data); 
    return 0; 
} 

int prepare_key(char *key) 
{ 
    int len = strlen(key); 
    for(int i = 0;i < len - 1;i++){ 
        if(isalpha(*(key + i))){ 
            *(key + i) = toupper(*(key + i)); 
        }else{ 
            return 0; 
        } 
    } del_repeat(key); 
    int len_new = strlen(key); 
    int j = 0,k = len_new; 
    for(j = 65; j < 91; j++){ if(!isfind(key,j,len_new)){
           *(key + k) = j;
           k++;
       } 
    }
    *(key + k) = 0;
    return 1;
}

void del_repeat(char *key)
{
    int i,j = 1;
    int len = strlen(key);
    char *res = key;
    for(i = 1;i < len - 1;i++){
        if(!isfind(res,*(key + i),i)){
            *(res + j) = *(key + i);
            j++;
        }
    }
    *(res + j) = 0;
}

int isfind(char *res,char key_char,int n)
{
    for(int i = 0;i < n;i++){
        if(key_char == *(res + i))
            return 1;
    }
    return 0;
}

void encrypt(char *data,char const *key){
    int len = strlen(data);
    char temp = 0;
    for(int i = 0;i < len;i++){
        temp = *data;
        *data = *(key + temp - 65);
        data++;
    }
    *data = 0;
}

void decrypt(char *data,char const *key){
    int len = strlen(data);
    char temp = 0;
    int i,j;
    for(i = 0;i< len;i++){
       for(j = 0;j < 26;j++){
            if(*(key + j) == *(data + i)){
                break;
            } 
       }
       *(data + i) = j + 65;
    }
    *(data + i) = 0;

}
