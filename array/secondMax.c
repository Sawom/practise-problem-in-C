#include<stdio.h>
int main(){
    int i,size,large1,large2,temp;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size];
    printf("enter elements: \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }

    large1=ary[0],large2=ary[1];

    temp=large1;
    large1=large2;
    large2=temp;

    for(i=2;i<size;i++){
        if(ary[i]>=large1){
            large2=large1;
            large1=ary[i];
        }
         else if(ary[i]>=large2){
            large2=ary[i];
        }
    }
    printf("large 1 = %d\n",large1);
    printf("large 2 = %d\n",large2);
}
