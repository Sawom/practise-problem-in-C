#include<stdio.h>
int EvenOdd(int num,int even,int result){
    result=(num%2==0)?printf("even number\n"):printf("odd number\n") ;
    return result;
}

int main(){
    int num,even,result1,result;
    printf("enter a number: \n");
    scanf("%d",&num);

    result1=EvenOdd(num, even, result);
}
