#include<stdio.h>
int main(){
    int i,row,col,n;
    printf("Enter number to show pattern: ");
    scanf("%d",&n);
/*
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d  ",col);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d  ",col);
        }
        printf("\n");
    }*/

    /*for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d  ",row);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d  ",row);
        }
        printf("\n");
    }*/

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%c  ",col+64);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%c  ",col+64);
        }
        printf("\n");
    }


}
