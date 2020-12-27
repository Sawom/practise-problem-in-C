#include<stdio.h>
void natural(int  lower,int upper){
    if(lower>upper){
        return ;
    }
    printf("%d  ",lower);
    natural(lower+1,upper);
}
int main(){
    int num,result,lower,upper;
    printf("Enter lower: \n");
    scanf("%d",&lower);
    printf("Enter  upper: \n");
    scanf("%d",&upper);
    natural( lower, upper);
}
