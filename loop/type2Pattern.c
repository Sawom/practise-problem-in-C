#include<stdio.h>
int main(){
    int i,row,col,n;
    printf("Enter number to show pattern: ");
    scanf("%d",&n);

    /*for(row=n;row>=1;row--){
         for(col=1;col<=row;col++){
            printf("%d  ",col);
         }
         printf("\n");
    }*/

    /* for(row=n;row>=1;row--){
         for(col=1;col<=row;col++){
            printf("%d  ",row);
         }
         printf("\n");
    } */

   /*/ for(row=n;row>=1;row--){
         for(col=1;col<=row;col++){
            printf("%c  ",col+96);
         }
         printf("\n");
    }*/

    for(row=n;row>=1;row--){
         for(col=1;col<=row;col++){
            printf("%d  ",col%2);
         }
         printf("\n");
    }


}
