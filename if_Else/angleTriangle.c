#include<stdio.h>
int main(){
    int first,second,third;
    printf("Enter 3 angle of the triangle : \n");
    scanf("%d%d%d",&first,&second,&third);

    if(first+second+third<=180){
        printf("given triangle is valid \n");
    }else{
        printf("given triangle is not  valid \n");
    }
}
