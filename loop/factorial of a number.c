#include<stdio.h>
int main(){
    int num,i,sum=1;
    printf("Enter a number :\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        sum=sum*i;
    }
    printf("factorial of = %d is = %d \n",num,sum);
}
