#include<stdio.h>
int main(){
    float basic,hra,da,gross;
    printf("Enter basic: \n");
    scanf("%f",&basic);

    if(basic<=10000){
        hra=basic*.2;
        da=basic*.8;
    }else if(basic>=10001 && basic<=20000){
        hra=basic* .25;
        da=basic* .9;
    }else if(basic>=20001){
        hra=basic*.3;
        da=basic*.95;
    }
     gross = basic+hra+da;
     printf("gross salary: %.2f\n",gross);
}
