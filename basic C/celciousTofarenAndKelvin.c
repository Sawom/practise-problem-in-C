#include<stdio.h>
int main(){
    float cel,faren,kel;
    printf("enter celsius... \n");
    scanf("%f",&cel);

    faren=(cel*1.8)+32;
    kel=cel+273;

    printf("fahrenheight  = %.f\n",faren);
    printf("kelvin = %.5f\n",kel);
return 0;
}


