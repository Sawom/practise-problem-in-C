#include<stdio.h>
int GCD(int num1,int num2){
    int gcd =1,min,i;
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
    return gcd;
}

int main(){
    int num1,num2,result;
    printf("Enter  number 1 : \n");
    scanf("%d",&num1);
    printf("Enter  number 2 : \n");
    scanf("%d",&num2);

    result = GCD(num1, num2);
    printf("GCD = %d\n",result);
}
