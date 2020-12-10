#include<stdio.h>
int main(){
    int first,second,third;
    printf("Enter 3 angle of the triangle : \n");
    scanf("%d%d%d",&first,&second,&third);

    if(first==second && second==third){
        printf("given triangle is equilateral \n");
    }else if(first==second || first==third || second==third){
        printf("given triangle is Isosceles \n");
    }else{
        printf("given triangle is  scalene \n");
    }
}

