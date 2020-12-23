#include<stdio.h>
int naturalNumberSum(int begin,int end){
    int i,sum=0;
    printf("enter begin \n");
    scanf("%d",&begin);
    printf("enter end \n");
    scanf("%d",&end);
    for(i=begin;i<=end;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int begin, end;
    int result;
    result =naturalNumberSum(begin, end);
     printf("sum of all natural number=%d \n",result);
}
