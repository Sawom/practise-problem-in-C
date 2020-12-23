#include<stdio.h>
void Scan(int ary[],int size){
    int i;
    printf("\nEnter elements: \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }
}

void Print(int ary[],int size){
    int i;
    printf("\nelements are: \n");
    for(i=0;i<size;i++){
        printf("%d  ",ary[i]);
    }
}

int Sum(int ary[],int size){
    int i,sum=0;
    printf("\nsome of elements :\n");
    for(i=0;i<size;i++){
        sum=sum+ary[i];
    }
return sum;
}

int Maximum(int ary[],int size);
int Minimum(int ary[],int size);

int main(){
    int size,result,result1,result2;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size];

    Scan(ary,size);
    Print(ary,size);

    result= Sum(ary,size);
    printf("sum of array = %d \n",result);
    result1=Maximum(ary,size);
    printf("Maximum of array = %d \n",result1);

    result2=Minimum(ary,size);
    printf("Minimum of array = %d \n",result2);
}

int Maximum(int ary[],int size){
    int max=ary[0],i;
    for(i=1;i<size;i++){
        if(ary[i]>max){
            max=ary[i];
        }
    }
    return max;
}

int Minimum(int ary[],int size){
    int min=ary[0],i;
    for(i=1;i<size;i++){
        if(ary[i]<min){
            min=ary[i];
        }
    }
    return min;
}
