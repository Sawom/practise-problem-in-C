#include<stdio.h>
int cube(int n){
    return n*n*n;
}

int main(){
    int n,result;
    printf("Enter number: \n");
    scanf("%d",&n);
    result=cube(n);
    printf("result of cube = %d",result);
}
