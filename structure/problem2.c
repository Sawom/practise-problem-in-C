#include<stdio.h>
struct height{
    float meter;
};

float difference(struct height h1,struct height h2){
    float result;
    if(h1.meter>h2.meter){
        result=h1.meter-h2.meter;
    }else if(h2.meter>h1.meter){
        result=h2.meter-h1.meter;
    }
    return result;
}

int main(){
    struct height h1,h2;
    float result1,result;
    printf("Enter person 1 height (in meter) : \n");
    scanf("%f",&h1.meter);

    printf("Enter person 2 height (in meter) : \n");
    scanf("%f",&h2.meter);

    result1=difference( h1,h2);

    printf("difference of two person height = %.3f \n", result1);
}
