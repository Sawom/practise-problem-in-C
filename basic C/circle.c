#include<stdio.h>
int main(){
    int radious;
    float diameter,circumference,area;

    printf("enter radius... \n");
    scanf("%d",&radious);

    diameter=2*radious;
    circumference=2*3.14*radious;
    area=3.14*radious*radious;

    printf("diameter = %.2f\n",diameter);
    printf("circumference= %.2f\n",circumference);
    printf("area = %.2f\n",area);
return 0;
}


