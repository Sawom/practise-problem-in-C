#include<stdio.h>
int main(){
    int num,i,j,sum;
    printf("Enter a number :\n");
    scanf("%d",&num);

    printf("perfect numbers are :\n");
    for(i=1;i<=num;i++){
        sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            printf("%d   ",i);
        }
    }
}
