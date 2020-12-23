#include<stdio.h>
void printArray(int ary[],int size){
    int i;
    printf(" elements are: \n");
    for(i=0;i<size;i++){
        printf("%d   ",ary[i]);
    }
}

int sum(int ary[],int size);

int main(){
    int size;
    int result;
    printf("Enter size of an array: \n");
    scanf("%d",&size);
     int ary[size],i;
     printf("Enter elements: \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }
    printArray(ary,size);

    result=sum(ary,size);
    printf("\nsum of elements = %d \n",result);
}

int sum(int ary[],int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum=sum+ary[i];
    }
    return sum;
}
