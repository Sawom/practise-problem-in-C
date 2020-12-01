#include<stdio.h>
int main(){
    char ch;
    unsigned char ch1;
    short sh;
    unsigned short  ush;
    int in;
    unsigned  int uin;
    long lo;
    unsigned  long ulo;
    long long llo;
    unsigned  long long ullo;

    float fl;
    double db;
    long double ldb;

    printf("enter a character... \n");
    ch=getchar();
    getchar();
    printf("your input character is =  %c\n\n" ,ch);

    printf("enter an unsigned  character... \n");
    scanf("%c",&ch1);
    printf("unsigned  character is =  %c\n\n" ,ch1);

    printf("enter a signed short value... \n");
    scanf("%hi",&sh);
    printf("your signed short value is  =  %hi\n\n" ,sh);

    printf("enter an unsigned short value... \n");
    scanf("%hu",&ush);
    printf("your unsigned short value is  =  %hu\n\n" ,ush);

    printf("enter an  integer value(positive\negetive)... \n");
    scanf("%d",&in);
    printf("your integer value is  =  %d\n\n" ,in);

    printf("enter an unsigned  integer value... \n");
    scanf("%lu",&uin);
    printf("your unsigned value is  =  %lu\n\n" ,uin);

    printf("enter an long signed  integer value... \n");
    scanf("%ld",&lo);
    printf("your long signed  integer value is  =  %ld\n\n" ,lo);

    printf("enter an unsigned long  integer value... \n");
    scanf("%lu",&ulo);
    printf("your unsigned value is  =  %lu\n\n" ,ulo);

    printf("enter an long long signed   value... \n");
    scanf("%lld",&llo);
    printf("your long signed  integer value is  =  %lld\n\n" ,llo);

    printf("enter an unsigned long  long value... \n");
    scanf("%llu",&ullo);
    printf("your unsigned value is  =  %llu\n\n" ,ullo);

    printf("enter a float value... \n");
    scanf("%f",&fl);
    printf("your unsigned value is  =  %.2f\n\n" ,fl);

    printf("enter a double value... \n");
    scanf("%lf",&db);
    printf("your double value is  =  %lf\n\n" ,db);

    printf("enter a long double value... \n");
    scanf("%Lf",&ldb);
    printf("your long double value is  =  %Lf\n\n" ,ldb);
return 0;
}
