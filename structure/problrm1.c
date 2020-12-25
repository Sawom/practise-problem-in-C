#include<stdio.h>
#include<math.h>
struct point{
    float x;
    float y;
};

int main(){
    struct point p1,p2;
    float d,dx,dy;
    printf("Enter point 1 \n");

    printf("Enter x1 \n");
    scanf("%f",&p1.x);
    printf("Enter y1 \n");
    scanf("%f",&p1.y);

    printf("Enter x2 \n");
    scanf("%f",&p2.x);
    printf("Enter y2 \n");
    scanf("%f",&p2.y);

    dx=p1.x-p2.x;
    dy=p1.y-p2.y;

    d=sqrt(dx*dx+dy*dy);
    printf("distance = %.2f \n",d);
}
