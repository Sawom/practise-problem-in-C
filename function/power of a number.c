#include<stdio.h>
void power(int base,int exp){
    int i,power=1;
    printf("enter base \n");
    scanf("%d",&base);
    printf("enter exponential \n");
    scanf("%d",&exp);

    for(i=1;i<=exp;i++){
        power=power*base;
    }
    printf("result = %d\n",power);
}

int main(){
    int base,exp;
    power(base,exp);
}
