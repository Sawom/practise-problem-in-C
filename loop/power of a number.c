#include<stdio.h>
int main(){
    int power=1,i,base,exp;
    printf("Enter base: \n");
    scanf("%d",&base);
    printf("Enter exponent: \n");
    scanf("%d",&exp);

    for(i=1;i<=exp;i++){
        power=power*base;
    }
     printf("power of given number: %d \n",power);

}
