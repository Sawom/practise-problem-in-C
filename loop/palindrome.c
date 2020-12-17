#include<stdio.h>
int main(){
    int n,num,reverse=0;
    printf("Enter a number \n");
    scanf("%d",&n);\

    num=n;
    while(n!=0){
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }

    printf("given number = %d \n",num);
    printf("reverse number = %d \n",reverse);

    if(reverse==num){
           printf("%d is palindrome \n",num);
    }else{
           printf("%d is not palindrome \n",num);
    }

}
