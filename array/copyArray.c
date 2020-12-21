#include<stdio.h>
int main(){
    int i,size;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary1[size],ary2[size],count=0;
    printf("enter elements in array 1: \n");
    for(i=1;i<=size;i++){
        scanf("%d",&ary1[i]);
    }

    for(i=1;i<=size;i++){
        ary2[i]=ary1[i];
    }
printf("elements of array 2: \n");
    for(i=1;i<=size;i++){
        printf("%d  ",ary2[i]);
    }
}
