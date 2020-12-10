#include<stdio.h>
int main(){
    int week;
    printf("Enter number of week : \n");
    scanf("%d",&week);

    if(week==1){
        printf("Saturday\n");
    }else if(week==2){
        printf("Sunday\n");
    }else if(week==3){
        printf("Monday\n");
    }else if(week==4){
        printf("Tuesday\n");
    }else if(week==5){
        printf("Wednesday\n");
    }else if(week==6){
        printf("Thrusday\n");
    }else if(week==7){
        printf("Friday\n");
    }

}


