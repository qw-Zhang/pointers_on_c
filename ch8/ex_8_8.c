#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAX 8

int check(int x[],int k);
void print(int x[],int n);
void backtrack(int x[],int k,int n,int *count);

int main(void)
{
    int n = MAX,x[MAX] = {0},count = 0;
    int k = 0;
    backtrack(x,k,n,&count);
    printf("%d\n",count);
    return 0;
}

void backtrack(int x[],int k,int n,int *count){
    if(k > n){
        print(x,MAX);
        (*count)++;
    }
    else{
        for(int i = 0; i <= n;i++){
            x[k] = i;
            if(check(x,k) == 1)
                backtrack(x,k+1,n,&count);
        }
    }
}

int check(int x[],int k)
{
    for(int i = 0;i < k;i++){
        if((x[i] == x[k]) || (abs(x[i] - x[k]) == abs(i - k)))
            return 0;
    }
    return 1;
}

void print(int x[],int n)
{
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(x[i] == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\n");
}

