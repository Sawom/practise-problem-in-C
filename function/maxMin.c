#include<stdio.h>
void Max(int max,int num1,int num2){
    if(num1>num2){
        max=num1;
    } else if(num2>num1){
        max=num2;
    }
    printf("maximum = %d \n ",max);
}

int Min(int min,int num1,int num2){
   min = (num1<num2)?num1:num2;
    return min;
}

int main(){
    int max, num1, num2;
    int result,min;
    printf("Enter two number: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    Max(max,num1,num2);
    result= Min(min, num1, num2);

    printf("minimum = %d \n",result);
}
