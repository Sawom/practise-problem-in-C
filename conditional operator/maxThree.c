#include<stdio.h>
int main(){
    int max,num1,num2,num3;
    printf("enter three numbers...");
    scanf("%d%d%d",&num1,&num2,&num3);

    max= (num1>num2 && num1>num3)? num1:(num2>num3)?num2:num3;
    printf("max  =%d",max);
}

