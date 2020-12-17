#include<stdio.h>
int main(){
    int num,i,j,sum=0;
    printf("Enter a number :\n");
    scanf("%d",&num);

    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        printf("perfect number = %d\n",sum);
    }else{
        printf("not a perfect number ");
    }

}
