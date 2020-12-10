#include<stdio.h>
int main(){
    int max,num1,num2;
    printf("enter two numbers...");
    scanf("%d%d",&num1,&num2);

    max=(num1>num2)?num1:num2;
    printf("max between %d and %d is =%d",num1,num2,max);
}
