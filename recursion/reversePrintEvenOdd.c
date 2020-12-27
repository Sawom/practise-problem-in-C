#include<stdio.h>
void odd(int num);
void even(int num){
    if(num==0){
        return ;
    }
    else{
        printf("%d  ",num);
        return even(num-2);
    }
}

int main(){
    int num1,num2;
    printf("Enter a even number : \n");
    scanf("%d",&num1);
    printf("\nEven numbers are: \n");
    even(num1);

    printf("\nEnter a odd number : \n");
    scanf("%d",&num2);
    printf("\nOdd numbers are: \n");
    odd(num2);
    return 0;
}

void odd(int num){
    if(num ==  -1){
        return;
    }
    else{
        printf("%d  ",num);
        return odd(num-2);
    }
}
