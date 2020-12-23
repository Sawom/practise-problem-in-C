#include<stdio.h>
void prime(int num,int result,int i,int count){
    count=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            count++;
            break;
        }
    }

    if(count==0){
        printf("prime number\n");
    }else{
        printf("not prime number\n");
    }
}


int main(){
    int num, result, i, count;
    printf("Enter a number: \n");
    scanf("%d",&num);
    prime(num,result,i,count);
}
