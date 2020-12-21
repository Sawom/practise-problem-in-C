#include<stdio.h>
int main(){
   int i,j,size,ary[50],temp,value;
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

   printf("\nafter sorting elements in ascending order....: \n");
   for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(ary[i]>ary[j]){
                temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
   }

   for(i=0;i<size;i++){
        printf("%d   ",ary[i]);
   }

   printf("\nafter sorting elements in descending order....: \n");
   for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(ary[i]<ary[j]){
                temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
   }
   for(i=0;i<size;i++){
        printf("%d   ",ary[i]);
   }
}
