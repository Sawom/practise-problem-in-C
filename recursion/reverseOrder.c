#include<stdio.h>
int reverseOrder(int num){
    if(num==0){
        return 0;
    }else{
        printf("%d  ",num);
        return num+reverseOrder( num-1);
    }
}
int main(){
    int num,result;
    printf("Enter num: \n");
    scanf("%d",&num);
    printf("numbers are given below:  \n");
    result=reverseOrder(num);
}
