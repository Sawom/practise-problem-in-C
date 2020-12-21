#include<stdio.h>
int main(){
   int i,j,size,ary[50],temp,value,N,x;
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
    printf("\nEnter number of times to left rotate: ");
    scanf("%d", &N);
    temp=0;

   printf("\n array elements after left rotation: \n");
   for (i = 0; i < N; i++) {
      x = ary[0];
      for (j = 0; j < size; j++) {
         temp=ary[j];
         ary[j] = ary[j + 1];
         ary[j+1]=temp;
      }
      ary[size- 1] = x;
   }

   for(i=0;i<size;i++){
        printf("%d  ",ary[i]);
   }
}
