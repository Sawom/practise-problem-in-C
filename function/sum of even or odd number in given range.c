#include<stdio.h>
int evenSum(int lower,int upper){
    int i,even=0;
    for(i=lower;i<=upper;i++){
        if(i%2==0){
           even=even+i;
        }
    }
    return even;
}

int oddSum(int lower,int upper){
    int i,odd=0;
    for(i=lower;i<=upper;i++){
        if(i%2==1){
            odd=odd+i;
        }
    }
    return odd;
}

int main(){
    int upper,lower;
    int result1,result2;
    printf("\nenter upper limit: \n");
    scanf("%d",&upper);
    printf("\nenter lower limit: \n");
    scanf("%d",&lower);

     result1=evenSum(upper,lower);
     printf("\n sum of even numbers: %d\n",result1);
     result2=oddSum(upper,lower);
      printf("\n sum of odd numbers: %d\n",result2);
}
