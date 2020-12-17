#include<stdio.h>
int main(){
    int num,first,last,sum=0;
    printf("Enter which number ...  \n");
    scanf("%d",&num);

    last = num%10;
    while(num>=10){
        num=num/10;
    }
    sum = num+last;
    printf("first digit = %d\n",num);
    printf("last digit = %d\n",last);
    printf("sum of first and last digit  = %d\n",sum);
}

