#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a number :\n");
    scanf("%d",&num);

     printf("factors of %d  given below:\n",num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d  ",i);
        }
    }
}
