#include<stdio.h>
int main(){
    double first,second,third;
    printf("enter first angle  \n");
    scanf("%lf",&first);
    printf("enter second angle  \n");
    scanf("%lf",&second);

    third= (180 -(first+second));
    printf("third angle = %lf\n",third);
return 0;
}
