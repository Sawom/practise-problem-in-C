#include<stdio.h>
#include <math.h>
int prime(int num){
    int result,i,count;
    count=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int armstrongNumber(int num) ;

int perfectNumber(int num){
    int i,sum;
    sum=0;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    printf("Enter num: \n");
    scanf("%d",&num);

    if(prime(num)){
        printf("prime number\n");
    }else{
        printf("not a prime number\n");
    }

    if(armstrongNumber(num)){
        printf("armstrong number\n");
    }else{
        printf("not a armstrong number\n");
    }

    if(perfectNumber(num)){
        printf("perfect number\n");
    }else{
        printf("not a perfect number\n");
    }
}

int armstrongNumber(int num) {
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    originalNum = num;
    digits = (int) log10(num) + 1;
    while(num > 0){
        lastDigit = num % 10;
        sum = sum + round(pow(lastDigit, digits));
        num = num / 10;
    }
    return (originalNum == sum);
}
