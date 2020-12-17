#include<stdio.h>
int main(){
    int num,i,count=0;
    printf("Enter a number :\n");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==0){
        printf("%d is prime \n",num);
    }else{
        printf("%d is not prime \n",num);
    }

}
