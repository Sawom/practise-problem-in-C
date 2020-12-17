#include<stdio.h>
int main(){
    int num,a,b,c,i;
    printf(" enter number : \n");
    scanf("%d",&num);
    a=0,b=1,c=0;
    for(i=1;i<=num;i++){
        printf("%d , ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
