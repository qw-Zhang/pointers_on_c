#include<stdio.h>

void matrix_multipy(int *m1,int *m2,int *r,int x,int y,int z);

int main(void)
{
//    int matrix_1[3][2] = {2,-6,3,5,1,-1};
    int matrix_1[6] = {2,-6,3,5,1,-1};
    int r_1 = 3,c_1 = 2;
//    int matrix_2[2][4] = {{4,-2,-4,-5},{-7,-3,6,7}};
    int matrix_2[8] = {4,-2,-4,-5,-7,-3,6,7};
    int r_2 = 2,c_2 = 4;
    int result[12] = {0};
    matrix_multipy(matrix_1,matrix_2,result,r_1,c_1,c_2);
    int size_res = sizeof(result)/sizeof(result[0]); 
    for(int i = 0; i < size_res;i++){
        printf("%d\t",result[i]);
    }
    return 0;
}

void matrix_multipy(int *m1,int *m2,int *r,int x,int y ,int z)
{
    for(int i = 0;i < x;i++){
        for(int j = 0;j < z;j++){
            int temp = 0;
            for(int k = 0;k < y;k++){
                temp += (*(m1 + i*y + k)) * (*(m2 + k*z + j));
            }
            *(r + i*(x+1)+j)  = temp;
        }
    }
}
