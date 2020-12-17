#include<stdio.h>    ///1/2+1/2+1/3....+n
int main(){
    float n,i;
    float sum=0;
    printf("Enter number.... \n");
    scanf("%f",&n);

    for(i=1;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("your series is : 1/2+1/2+1/3....+ %f = %.2f\n",n,sum);
}
