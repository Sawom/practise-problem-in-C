#include<stdio.h>
int main(){
    int num;
    printf("Enter a numbers...\n");
    scanf("%d",&num);

    if(num>0){
        printf("%d is positive",num);
    }else if(num<0){
        printf("%d is negetive",num);
    }
}

