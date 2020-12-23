#include<stdio.h>
int perfectNumber(int num){
    int i,sum;
    sum=0;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}
void print(int start,int end);

int main(){
    int start, end;
    printf("Enter start: \n");
    scanf("%d",&start);

    printf("Enter end: \n");
    scanf("%d",&end);
    print(start,end);
}
void print(int start,int end){
    while(start<=end){
        if(perfectNumber(start)){
           printf("%d  ",start);
        }
         start++;
    }
}
