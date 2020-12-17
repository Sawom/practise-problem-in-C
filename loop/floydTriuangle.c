#include<stdio.h>
int main(){
    int i,row,col,n,count=0;
    printf("enter number to print...  \n");
    scanf("%d",&n);
    printf("your pattern will be given below...  \n");

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",++count);
        }
        printf("\n");
    }
}
