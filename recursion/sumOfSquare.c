#include<stdio.h>
int sumOfSquare(int n){
    if(n==1){
        return 1;
    }else{
        return n*n+sumOfSquare(n-1);
    }
}

int main(){
    int n,result;
    printf("Enter num: \n");
    scanf("%d",&n);
    result=sumOfSquare(n);
     printf("result of sum= %d \n",result);
}
