#include<stdio.h>
int main(){
    int i,size;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size];
    int sum=0;
    printf("enter elements: \n");
    for(i=1;i<=size;i++){
        scanf("%d",&ary[i]);
        sum=sum+ary[i];
    }
    printf("sum = %d \n",sum);
}
