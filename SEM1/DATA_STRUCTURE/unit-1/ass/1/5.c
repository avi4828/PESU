#include<stdio.h>

float calavg(int arr[],int size){
    int total = 0;
    for(int i=0;i<size;i++){
        total += arr[i];
    }
    float avg = total / size;
    return avg;
}

int main(){

    int arr[5] = {10,20,30,40,50};
    float avg = calavg(arr,5);

    printf("average of element %.1f\n",avg);

    return 0;
}