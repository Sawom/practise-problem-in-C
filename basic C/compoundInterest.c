#include<stdio.h>
int main(){
    float ci,principle,time,rate;

    printf("enter principle... \n");
    scanf("%f",&principle);
    printf("enter time... \n");
    scanf("%f",&time);
    printf("enter rate... \n");
    scanf("%f",&rate);

    ci= principle*(pow((1+rate/100),time));
    printf("simle interest = %f",ci);
    return 0;
}

