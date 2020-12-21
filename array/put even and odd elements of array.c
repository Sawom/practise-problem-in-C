#include<stdio.h>
int main(){
   int i,size,ary[50];
   printf("Enter size of an array: \n");
   scanf("%d",&size);
   printf("\n Enter array elements: \n");
   for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
   }

   printf("\n array elements are: \n");
   for(i=0;i<size;i++){
        printf("%d  ",ary[i]);
   }
   printf("\nEven elements are: \n");
   for(i=0;i<size;i++){
        if(ary[i]%2==0){
            printf("%d  ",ary[i]);
        }
   }

   printf("\n odd elements are: \n");
   for(i=0;i<size;i++){
        if(ary[i]%2==1){
            printf("%d  ",ary[i]);
        }
   }
}
