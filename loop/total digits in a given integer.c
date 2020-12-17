#include<stdio.h>
int main(){
    int num,i,count=0;
    printf("Enter which number ...  \n");
    scanf("%d",&num);

    while(num>0){
        num=num/10;
        count++;
    }
    printf("total digit = %d\n",count);

}
