#include<stdio.h>
int LCM(int num1,int num2){
    int i,max,lcm;
    if(num1>num2){
        max=num1;
    }else{
        max=num2;
    }

    for(i=1;i<=max;i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
        lcm=i+max;
    }
return lcm;
}

int main(){
    int num1,num2,result;
    printf("Enter  number 1 : \n");
    scanf("%d",&num1);
    printf("Enter  number 2 : \n");
    scanf("%d",&num2);

    result = LCM(num1,num2);
    printf("LCM = %d \n",result);
}
