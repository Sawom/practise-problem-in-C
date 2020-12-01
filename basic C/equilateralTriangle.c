#include<stdio.h>
#include<math.h>
int main(){
    double side,area;
    printf("enter side  \n");
    scanf("%lf",&side);

    area = (sqrt(3)/4) *side*side;
    printf("result = %lf\n",area);
return 0;
}


