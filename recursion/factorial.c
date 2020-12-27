#include<stdio.h>
int factorial(int n){
     int fact=1;
    if(n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
   int n,result;
   printf("Enter num: \n");
    scanf("%d",&n);
    result = factorial(n);
    printf("factorial of %d = %d\n",n,result);
}
