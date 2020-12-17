#include<stdio.h>
int main(){
    int i,row,col,n;
    printf("enter number to print...  \n");
    scanf("%d",&n);
    printf("your pattern will be given below...  \n");
/*
    for(row=1;row<=n;row++){
         for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%d",row);
        }
        printf("\n");
    }*/
/*
    for(row=1;row<=n;row++){
         for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%c",row+64);
        }
        printf("\n");
    }*/

    for(row=1;row<=n;row++){
         for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%c",col+96);
        }
        printf("\n");
    }


}
