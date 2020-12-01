#include<stdio.h>
int main(){
    int cm;
    float m,km;
    printf("enter value in cm... \n");
    scanf("%d",&cm);
    m=(float) cm/100;
    km=(float) cm/1000;

    printf("meter = %.5f\n",m);
    printf("kilo-meter = %.5f\n",km);
return 0;
}

