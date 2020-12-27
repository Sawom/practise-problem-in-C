#include<stdio.h>
int sumOfCube(int n){
    if(n==1){
        return 1;
    }else{
        return n*n*n+sumOfCube(n-1);
    }
}

int main(){
    int n,result;
    printf("Enter num: \n");
    scanf("%d",&n);
    result=sumOfCube(n);
     printf("result of sum= %d \n",result);
}
