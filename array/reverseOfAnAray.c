#include<stdio.h>
int main(){
   int i,size,ary[50];
   printf("Enter size of an array: \n");
   scanf("%d",&size);
   printf("Enter array elements: \n");
   for(i=1;i<=size;i++){
        scanf("%d",&ary[i]);
   }

   printf("reverse elements are \n");
   for(i=size;i>=1;i--){
        printf("%d  ",ary[i]);
   }
}
