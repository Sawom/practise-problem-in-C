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

   printf("\nsorting elements are : \n" );
    for(i=0;i<size;i++){
            printf("%d   ",ary[i]);
   }

    printf("\neven sorting element : \n" );
   for(i=0;i<size;i++){
        if(ary[i]%2==0){
            printf("%d   ",ary[i]);
        }
   }

   printf("\nodd sorting element : \n" );
   for(i=0;i<size;i++){
        if(ary[i]%2==1){
            printf("%d   ",ary[i]);
        }
   }
}
