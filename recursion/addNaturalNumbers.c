#include<stdio.h>
int add(int n){
    if(n==1){
        return 1;
    }else{
        return n+add(n-1);
    }
}

int main(){
    int n,result;
    printf("Enter num: \n");
    scanf("%d",&n);
    result=add(n);
     printf("result of sum %d = %d\n",n,result);
}
