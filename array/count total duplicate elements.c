#include<stdio.h>
int main(){
    int size,n,i,j,count=0;
    printf("Enter size of an array: \n");
    scanf("%d",&size);
    int ary[size];
    printf("Enter elements: \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(ary[i]==ary[j]){
                count++;
                break;
            }
        }
    }
    printf("total duplicate elements= %d \n",count);
}
