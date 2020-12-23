#include<stdio.h>
void Sum(int ary[],int size){
    int i,sum=0;
    printf(" elements are: \n");
    for(i=0;i<size;i++){
        printf("%d   ",ary[i]);
    }

    for(i=0;i<size;i++){
        sum=sum+ary[i];
    }
    printf("\nsum of elements = %d \n",sum);
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
    Sum(ary, size);
}
