#include<stdio.h>
int main(){
    int num,i,j,count,sum=0;
    printf("Enter a number :\n");
    scanf("%d",&num);

    printf("print prime factor numbers are :\n");
    for(i=2;i<=num;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0&&num%i==0){
            printf("%d   ",i);
        }
    }
}
