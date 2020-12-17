#include<stdio.h>    ///1.5+2.5+....+n
int main(){
    float n,i;
    float sum=0;
    printf("Enter number.... \n");
    scanf("%f",&n);

    for(i=1.5;i<=n;i++){
        sum=sum+i;
    }
    printf("your series is : 1.5+2.5+....+ %f = %.2f\n",n,sum);
}
