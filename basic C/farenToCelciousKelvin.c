#include<stdio.h>
int main(){
    float cel,faren,kel;
    printf("enter faren... \n");
    scanf("%f",&faren);

    cel=(faren-32)/1.8;
    kel= ( (faren-32)*(5/9) )-273;

    printf("celsious  = %f\n",cel);
    printf("kelvin = %f\n",kel);
return 0;
}



