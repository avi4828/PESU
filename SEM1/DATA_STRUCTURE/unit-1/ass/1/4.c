#include<stdio.h>

int main(){

    int arr1d[5]={1,2,3,4,5};
    int arr2d[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int baseaddress1d = 2000;
    int baseaddress2d = 3000;
    int sizeof1d = sizeof(arr1d[0]);
    int sizeof2d = sizeof(arr2d[0][0]);
    int row = 1,col = 2;
    int index = 2;

    int address1d = baseaddress1d + (index * sizeof1d);
    int address2d = baseaddress2d + ((row * col+1) + col) * sizeof2d;

    printf("address of element at index %d in 1D array: %d\n",index,address1d);
    printf("address of element at (%d, %d) in 2D array: %d\n",row,col,address2d);


    return 0;
}