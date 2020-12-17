#include<stdio.h>
int main(){
    int i,row,col,n;
    printf("enter number to print...  \n");
    scanf("%d",&n);
    printf("your pattern will be given below...  \n");


    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
             if(row==1||row==n||col==1||col==n) {
                    printf("*");

             }  else{
                 printf(" ");
             }
        }
        printf("\n");
    }
}
