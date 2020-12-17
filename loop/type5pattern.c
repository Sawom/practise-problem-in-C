#include<stdio.h>
int main(){
    int i,row,col,n;
    printf("enter number to print...  \n");
    scanf("%d",&n);
    printf("your pattern will be given below...  \n");

    /*for(row=1;row<=n;row++){
            for(col=1;col<=n-row;col++){
                printf(" ");
            }
            for(col=1;col<=row;col++){
                printf("%d",col);
            }
            printf("\n");
    }
     for(row=n-1;row>=1;row--){
            for(col=1;col<=n-row;col++){
                printf(" ");
            }
            for(col=1;col<=row;col++){
                printf("%d",col);
            }
            printf("\n");
    } */
/*
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%c",col+64);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%c",col+64);
        }
        printf("\n");
    }*/

/*
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%c",row+96);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%c",row+96);
        }
        printf("\n");
    }*/


    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",row%2);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",row%2);
       }
        printf("\n");
    }
}
