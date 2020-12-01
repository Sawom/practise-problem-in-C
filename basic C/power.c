#include<stdio.h>
#include<math.h>
int main(){
    double base,exponent,power;
    printf("enter base  \n");
    scanf("%lf",&base);
    printf("enter base  \n");
    scanf("%lf",&exponent);
    power = pow(base,exponent);
    printf("result = %lf\n",power);
return 0;
}
