#include<stdio.h>
int main(){
    int unit,amnt,sur,total;
    printf("Enter unit \n");
    scanf("%d",&unit);

    if(unit<=50){
        amnt=unit*.5;
    }else if(unit<=150){
        amnt=25+(unit-50)*.75;
    }else if(unit<=250){
        amnt=100+(unit-150)*1.2;
    }else if(unit>250){
        amnt=220+(unit-250)*1.2;
    }
    sur=amnt*.2;
    total=amnt+sur;

    printf("surcharge = %d \n",sur);
    printf("total = %d \n",total);
}
