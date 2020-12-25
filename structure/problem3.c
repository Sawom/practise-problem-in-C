#include<stdio.h>
struct bank{
    char name[30];
    double balance;
};

void definesRich(struct bank b1,struct bank b2){
    int result;
    if(b1.balance>b2.balance){
        printf("\n%s is richer than  %s \n",b1.name,b2.name);
    } else if(b2.balance>b1.balance){
        printf("\n%s is richer than  %s \n",b2.name,b1.name);
    }
    else{
        printf("\n%s and  %s are equally rich \n",b1.name,b2.name);
    }
}

int main(){
    struct bank b1,b2;
    double result1;
    printf("enter name of person 1: \n");
    gets(b1.name);
    printf("enter balance of person 1: \n");
    scanf("%lf",&b1.balance);

    printf("enter name of person 2: \n");
    fflush(stdin);
    gets(b2.name);
    printf("enter balance of person 2: \n");
    scanf("%lf",&b2.balance);

    definesRich(b1,b2);
}
