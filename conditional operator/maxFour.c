#include<stdio.h>
int main(){
    int max,num1,num2,num3,num4;
    printf("enter four numbers...");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    max= (num1>num2 && num1>num3&& num1>num4)? num1:(num2>num3&& num2>num4)?num2:(num3>num4)?num3:num4;
    printf("max  =%d",max);
}
