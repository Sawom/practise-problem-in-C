#include<stdio.h>
int main(){
    int num,product=1;
    printf("Enter a  number ...  \n");
    scanf("%d",&num);

    while(num>0){
        product=product*(num%10);
        num=num/10;
    }
    printf(" product of digits = %d\n", product);
}

