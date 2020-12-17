#include<stdio.h>
int main(){
    int num,reverse=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    while(num!=0){
        reverse=(reverse*10)+ (num%10);
        num=num/10;
    }
    printf("reverse = %d\n",reverse);

}
