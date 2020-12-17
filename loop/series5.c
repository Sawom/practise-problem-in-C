#include<stdio.h>    /// 1*2*3*....*n
int main(){
    int n,i,sum=1;
    printf("Enter number.... \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("your series is : 1*2*3*.... %d = %d \n",n,sum);
}

