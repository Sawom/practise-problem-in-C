#include<stdio.h>
int main(){
    int i,odd=0,n;
    printf("enter n... \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         if(i%2==1){
            odd=odd+i;
         }
    }
    printf("even sum = %d ",odd);
}
