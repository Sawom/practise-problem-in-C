#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }else{
         if(n==1){
            return 1;
         }
         else{
            return (fibonacci(n-1)+fibonacci(n-2));
         }
    }
}

int main(){
    int result,n,i;
    printf("Enter num: \n");
    scanf("%d",&n);
    printf("fibonacci numbers are: \n");
    for(i=0;i<=n;i++){
        result=fibonacci(i);
        printf("%d   ",result);
    }
}
