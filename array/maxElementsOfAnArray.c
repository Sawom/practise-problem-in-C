#include<stdio.h>
int main(){
    int i,size;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size],max;
    printf("enter elements in array 1: \n");
    for(i=1;i<=size;i++){
        scanf("%d",&ary[i]);
    }
     max=ary[0];

    for(i=1;i<=size;i++){
       if(ary[i]>max){
        max=ary[i];
       }
    }
    printf("maximum =%d\n",max);
}

