#include<stdio.h>
int main(){
   int i,j,k,size,ary[50];
   printf("Enter size of an array: \n");
   scanf("%d",&size);
   printf("Enter array elements: \n");
   for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
   }

  for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(ary[i]==ary[j]){
            for(k=j;k<size;k++){
                ary[k]=ary[k+1];
            }
            size--;
            j--;
        }
    }
  }

   printf("After delete duplicate elements: \n");
   for(i=0;i<size;i++){
        printf("%d  ",ary[i]);
   }
}
