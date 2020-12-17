#include<stdio.h>
int main(){
    int gcd=1,i,min,num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);

    if(num1<num2){
        min=num1;
    }else{
        min=num2;
    }
    for(i=1;i<=min;i++){
        if(num1%i==0&&num2%i==0){
            gcd=i;
        }
    }
    printf("gcd = %d\n",gcd);
}
