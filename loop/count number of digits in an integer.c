#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter a  number ...  \n");
    scanf("%d",&num);

    while(num!=0){
        num=num/10;
        count++;
    }
    printf("digits = %d\n",count);
}
