#include<stdio.h>
void even(int lower,int upper){
    int i;
    for(i=lower;i<=upper;i++){
        if(i%2==0){
            printf("%d  ",i);
        }
    }
}

void odd(int lower,int upper){
    int i;
    for(i=lower;i<=upper;i++){
        if(i%2==1){
            printf("%d  ",i);
        }
    }
}

int main(){
    int upper,lower;
    printf("\nenter upper limit: \n");
    scanf("%d",&upper);
    printf("\nenter lower limit: \n");
    scanf("%d",&lower);

     printf("\neven numbers are: \n");
     even(upper,lower);
     printf("\nodd numbers are: \n");
     odd(upper,lower);
}
