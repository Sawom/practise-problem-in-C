#include<stdio.h>
int main(){
    int first,second,third;
    printf("Enter 3 angle of the triangle : \n");
    scanf("%d%d%d",&first,&second,&third);

    if((first+second>third) &&(second+third>first)&& (first+third>second) ){
        printf("given side of triangle is valid \n");
    }else{
        printf("given side of triangle is not  valid \n");
    }
}

