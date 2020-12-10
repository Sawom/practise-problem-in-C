#include<stdio.h>
int main(){
    int year;
    printf("enter  year...\n");
    scanf("%d",&year);

    (year%400==0 && year%100!=0 )||( year%4==0)?printf("leap year\n"):printf("not a leap year\n");
}


