#include<stdio.h>
int main(){
    float si,principle,time,rate;

    printf("enter principle... \n");
    scanf("%f",&principle);
    printf("enter time... \n");
    scanf("%f",&time);
    printf("enter rate... \n");
    scanf("%f",&rate);

    si= (principle*time*rate)/100;
    printf("simle interest = %f",si);
    return 0;
}
