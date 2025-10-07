#include<stdio.h>

struct student
{
    char name[50];
    int age;
    float mark[4];
};

float calavg(struct student s[],int size){
    
    float total = 0;

    for(int i = 0;i<size;i++){
        total = 0;
        for(int j = 0;j<4;j++){
            total += s[i].mark[j] / 4;
        }
        printf("average mark of student %d is %0.1f\n",i+1,total);
    }
    
    return 0;
}

int main(){

    struct student s[3] = {
        {"avi",20,{90,80,60,40}},
        {"parshant",20,{90,40,70,40}},
        {"darshit",19,{90,50,70,40}}
    };

    int size = 3;
    calavg(s,size);

    return 0;
}