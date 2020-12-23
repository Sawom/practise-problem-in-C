#include<stdio.h>
void printArray(int ary[],int size){
    int i;
    printf(" elements are: \n");
    for(i=0;i<size;i++){
        printf("%d   ",ary[i]);
    }
}

int main(){
    int size;
    printf("Enter size of an array: \n");
    scanf("%d",&size);
     int ary[size],i;
     printf("Enter elements: \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }
    printArray(ary,size);
}
