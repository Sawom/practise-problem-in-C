#include<stdio.h>
int main(){
    float phy,che,math,bng,eng;
    float total,per,avg;
    printf("enter numbers of five subjects.....: \n");
    scanf("%f%f%f%f%f",&phy,&che,&math,&bng,&eng);

    total= phy+che+math+bng+eng;
    avg= total/5;
    per= (total/500)*100;

    printf("total = %.0f \n",total);
    printf("average = %.2f \n",avg);
    printf("persentage = %.2f \n",per);
}
