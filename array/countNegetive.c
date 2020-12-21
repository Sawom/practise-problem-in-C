#include<stdio.h>
int main(){
    int i,size;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size],count=0;
    printf("enter elements: \n");
    for(i=1;i<=size;i++){
        scanf("%d",&ary[i]);
    }

     for(i=1;i<=size;i++){
        if(ary[i]<0){
             count++;
        }
    }
    printf("total negetive numbers  = %d\n",count);
}
