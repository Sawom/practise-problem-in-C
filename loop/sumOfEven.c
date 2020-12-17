#include<stdio.h>
int main(){
    int i,even=0,n;
    printf("enter n... \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         if(i%2==0){
            even=even+i;
         }
    }
    printf("even sum = %d ",even);
}


