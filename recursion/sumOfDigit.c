#include<stdio.h>
int sumOfDigits(int num){
    if(num==0){
        return 0;
    }
    else {
        return ((num%10)+sumOfDigits(num/10));
    }
}

int main(){
    int result,n,i;
    printf("Enter num: \n");
    scanf("%d",&n);

     result=sumOfDigits(n);
     printf("sum of digit= %d\n",result);
}
