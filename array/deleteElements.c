#include<stdio.h>
int main(){
    int size,i;
    printf("Enter size of an array.....: \n");
    scanf("%d",&size);
    int ary[size],value,pos;
    printf("Enter elements.....: \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }
     printf("your elements.....: \n");
    for(i=0;i<size;i++){
        printf("%d  ",ary[i]);
    }

    printf("\nenter which position to delete : \n");
    scanf("%d",&pos);
    for(i=pos-1;i<size-2;i++){
        ary[i]=ary[i+1];
    }
    ary[size-1]=0;

    for(i=0;i<size;i++){
        printf("%d  ",ary[i]);
    }
}
