#include<stdio.h>
int main(){
    int size,i;
    printf("Enter size of an array.....: \n");
    scanf("%d",&size);
    int ary[size],pos,value;
    printf("Enter elements.....: \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }
     printf("your elements.....: \n");
    for(i=0;i<size;i++){
        printf("%d  ",ary[i]);
    }

    printf("\n enter which position to add new element... \n");
    scanf("%d",&pos);

    printf("enter value ... \n");
    scanf("%d",&value);
    for(i=size;i>=pos;i--){
        ary[i]=ary[i-1];
    }
    ary[pos-1]=value;
     printf("after add  new element array is given below... \n");
     for(i=0;i<size+1;i++){
        printf("%d  ",ary[i]);
    }
}
