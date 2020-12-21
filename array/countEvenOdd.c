#include<stdio.h>
int main(){
    int i,size;
    printf("enter size of an array: \n");
    scanf("%d",&size);
    int ary[size];
    int even=0,odd=0;
    printf("enter elements: \n");
    for(i=1;i<=size;i++){
        scanf("%d",&ary[i]);
        if(ary[i]%2==0){
            even++;
        }else if(ary[i]%2==1){
            odd++;
        }
    }
    printf("total Even numbers = %d \n ",even);
    printf("total odd numbers = %d \n ",odd);

}
