#include<stdio.h>
void palindrome(int num);
int main(){
    int num;
    palindrome(num);
}
void palindrome(int num){
    printf("Enter number: \n");
    scanf("%d",&num);
    int reverse=0,n;
    n=num;
    while(num!=0){
        reverse=(reverse*10)+(num%10);
        num=num/10;
        }

    printf("reverse = %d  \n",reverse);
    if(reverse==n){
        printf("%d is palindrome \n",n);
    }else{
        printf("%d is not palindrome \n",n);
    }
}
