#include<stdio.h>
int main(){
    int num;
    printf("Enter a numbers...\n");
    scanf("%d",&num);

    if(num%5==0 && num%11==0){
        printf("%d is dvisible by 5 and also 11",num);
    }else{
         printf("%d is not  dvisible by 5 and also 11",num);
    }

}
