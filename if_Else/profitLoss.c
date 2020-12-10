#include<stdio.h>
int main(){
    int cp,sp,amt;
    printf("Enter cost price: \n");
    scanf("%d",&cp);
    printf("Enter sell price: \n");
    scanf("%d",&sp);

    if(sp>cp){
        amt=sp-cp;
        printf("Profit = %d \n",amt);
    }else if(cp>sp){
        amt=cp-sp;
        printf("Loss = %d \n",amt);
    }
}
