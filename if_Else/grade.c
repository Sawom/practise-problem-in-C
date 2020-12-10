#include<stdio.h>
int main(){
    float phy,che,math,bio,cmp;
    float total,per;
    printf("Enter  marks of five subjects: \n");
    scanf("%f%f%f%f%f",&phy,&che,&math,&bio,&cmp);

    total= phy+che+math+bio+cmp;
    per=(total*100)/500;

    printf("total marks= %.2f\n",total);
    printf("percentage= %.2f\n",per);

    if(per>=90){
        printf("Grade A\n");
    } else if(per>=80){
        printf("Grade B\n");
    } else if(per>=70){
        printf("Grade C\n");
    }else if(per>=60){
        printf("Grade D\n");
    }else if(per>=40){
        printf("Grade E\n");
    }else if(per<40){
        printf("Grade F\n");
    }

}
