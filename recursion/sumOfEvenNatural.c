#include<stdio.h>
int sumOfEven(int n){
    if(n==0){
        return 0;
    }else{
        return n+sumOfEven(n-2);
    }
}

int main(){
    int n,result;
    printf("Enter num: \n");
    scanf("%d",&n);
    result=sumOfEven(n);
     printf("result of sum %d = %d\n",n,result);
}
