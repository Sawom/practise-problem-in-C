#include<stdio.h>
int main(){
    int lcm=1,i,max,num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        max=num1;
    }else{
        max=num2;
    }
      i=max;
    while(1){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
        i=i+max;
    }
     printf("lcm = %d\n",lcm);
}
