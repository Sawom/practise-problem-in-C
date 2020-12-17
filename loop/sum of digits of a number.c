#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a  number ...  \n");
    scanf("%d",&num);

    while(num!=0){
        sum=sum+(num%10);
        num=num/10;
    }
    printf("sum of digits = %d\n",sum);
}

