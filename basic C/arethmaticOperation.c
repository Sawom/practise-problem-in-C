#include<stdio.h>
int main(){
    int num1,num2;
    int add,sub,mul,mod;
    double div;

    printf("enter two numbers.... \n");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/num2;
    mod=num1%num2;

    printf("addition = %d\n",add);
    printf("substruction = %d\n",sub);
    printf("multiplication = %d\n",mul);
    printf("addition = %.3f\n",div);
    printf("moddulus  = %d\n",mod);
return 0;
}
