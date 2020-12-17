#include <stdio.h>
int main(){
    char ch;
    float nm1,nm2,result=0.0f;
    printf("enter [number 1] [+ - * /] [number 2]  \n");
    scanf("%f %c %f",&nm1,&ch,&nm2);
    switch(ch){
        case  '+':
            result=nm1+nm2;
            break;

        case  '-':
            result=nm1-nm2;
            break;

        case '*':
            result=nm1*nm2;
            break;

        case '/':
            result=nm1/nm2;
            break;

        default:
            printf("invalid input\n");
    }
    printf("result = %f",result);
}
