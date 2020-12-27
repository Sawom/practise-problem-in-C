#include<stdio.h>
int sumOfOdd(int n){
    if(n==1){
        return 1;
    }else{
        return n+sumOfOdd(n-2);
    }
}

int main(){
    int n,result;
    printf("Enter num: \n");
    scanf("%d",&n);
    result=sumOfOdd(n);
     printf("result of sum %d = %d\n",n,result);
}

