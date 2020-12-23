#include<stdio.h>
#include<math.h>
float  circumference(float  radious,float cir);

float diameter(float radious,float dia){
    dia=2*radious;
    return dia;
}

float area(float radious,float ara){
    ara=M_PI*radious*radious;
    return ara;
}

int main(){
    float radious,result1,result2,result3;
    float cir,dia,ara;
    printf("Enter radious: \n");
    scanf("%f",&radious);
    result1=circumference(radious,cir);
    result2=diameter(radious,dia);
    result3=area(radious,ara);

    printf("circumference of circle = %.3f \n",result1);
    printf("diameter of circle = %.3f \n",result2);
    printf("area of circle = %.3f \n",result3);
}

float  circumference(float  radious,float cir){
    cir=2*M_PI*radious;
    return cir;
}
