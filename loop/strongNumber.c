#include<stdio.h>
int main(){
    int num,fact,i,last,sum=0,orginal;
    printf("enter number \n");
    scanf("%d",&num);

    orginal=num;
    while(num!=0){
        last=num%10;
        fact=1;
        for(i=1;i<=last;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==orginal){
        printf("%d is strong number\n",orginal);
    }else{
        printf("%d is not a strong number\n",orginal);
    }
}
