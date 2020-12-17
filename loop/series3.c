#include<stdio.h>    ///1^2+2^2+....+n
int main(){
    int n,i,sum=0;
    printf("Enter number.... \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("your series is : 1^2+2^2+....+ %d = %d\n",n,sum);
}

