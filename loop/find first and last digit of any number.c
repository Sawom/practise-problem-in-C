#include<stdio.h>
int main(){
    int num,first,last;
    printf("Enter which number ...  \n");
    scanf("%d",&num);

    last = num%10;
    while(num>=10){
        num=num/10;
    }
    printf("first digit = %d\n",num);
    printf("last digit = %d\n",last);
}
