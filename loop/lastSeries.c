#include<stdio.h>
int main(){
    int i,odd=0,even=0,sum,n;
    printf("Enter n \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            even=even+i;
        }else if(i%2==1){
            odd=odd+i;
        }
    }
    printf("sum =  %d",odd-even);
}
