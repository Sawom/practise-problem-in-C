#include<stdio.h>
int main(){
    int i,size;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size],max,min;
    printf("enter elements in array : \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }
     max=ary[0];
     min=ary[0];

    for(i=1;i<size;i++){
       if(ary[i]>max){
        max=ary[i];
       }
    }
    for(i=1;i<size;i++){
       if(ary[i]<min){
        min=ary[i];
       }
    }

    printf("maximum =%d\n",max);
    printf("minimum =%d\n",min);
}

