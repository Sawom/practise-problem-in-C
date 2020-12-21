#include<stdio.h>
int main(){
    int i,size;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size];
    printf("enter elements: \n");
    for(i=1;i<=size;i++){
        scanf("%d",&ary[i]);
    }
    printf("elements are: \n");
     for(i=1;i<=size;i++){
        if(ary[i]>0){
             printf("%d  ",ary[i]);
        }
    }
}

