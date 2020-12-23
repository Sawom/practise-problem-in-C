#include<stdio.h>
int prime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

void print(int lower,int upper){
    while(lower<=upper){
        if(prime(lower)){
            printf("%d  ",lower);
        }
        lower++;
    }
}

int main(){
    int lower,upper;
    printf("Enter lower limit: \n");
    scanf("%d",&lower);
     printf("Enter upper limit: \n");
    scanf("%d",&upper);

    print(lower,upper);
}
