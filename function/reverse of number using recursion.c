#include<stdio.h>
int Reverse(int num);
int main(){
    int num,result;
    printf("Enter number: \n");
    scanf("%d",&num);
    result=Reverse(num);
    printf("reverse= %d \n",result);
}
int Reverse(int num){
    int i,reverse=0;
    while(num!=0){
        reverse=(reverse*10)+(num%10);
        num=num/10;
        }
    return reverse;
}
