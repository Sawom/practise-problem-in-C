#include<stdio.h>
void naturalNumber(int begin,int end){
    int i;
    printf("enter begin \n");
    scanf("%d",&begin);
    printf("enter end \n");
    scanf("%d",&end);
    for(i=begin;i<=end;i++){
        printf("%d ",i);
    }
}
int main(){
    int begin, end;
    naturalNumber(begin, end);
}
