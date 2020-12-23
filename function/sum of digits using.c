#include<stdio.h>
int sumOfDigit(int num, int digit){
     digit=0;

    while(num!=0){
        digit=digit+(num%10);
        num=num/10;
    }
    return digit;
}
int main(){
    int num,digit,result;
    printf("Enter number: \n");
    scanf("%d",&num);
    result=sumOfDigit( num,digit);
    printf("sum Of Digit = %d \n",result);
}
