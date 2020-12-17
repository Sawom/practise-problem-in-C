#include<stdio.h>
int main(){
    int i,row,col,n;
    printf("enter number to print...  \n");
    scanf("%d",&n);
    printf("your pattern will be given below...  \n");
/*
    for(row=n;row>=1;row--){
         for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%d",row);
        }
        printf("\n");
    }*/
/*
    for(row=n;row>=1;row--){
         for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%d",col%2);
        }
        printf("\n");
    }*/

    for(row=n;row>=1;row--){
         for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%c",col+64);
        }
        printf("\n");
    }



}
