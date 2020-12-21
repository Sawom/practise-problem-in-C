#include<stdio.h>
int main(){
   int i,ary1[50],size1;
   int ary2[50],size2;
   int merge[150],index1,index2,index,total;

   printf("Enter size of first array: \n");
   scanf("%d",&size1);
   printf("\n Enter first array elements: \n");
   for(i=0;i<size1;i++){
        scanf("%d",&ary1[i]);
   }
   printf("\n  first array elements are: \n");
   for(i=0;i<size1;i++){
        printf("%d  ",ary1[i]);
   }

   printf("\nEnter size of second array: \n");
   scanf("%d",&size2);
   printf("\n Enter second array elements: \n");
   for(i=0;i<size2;i++){
        scanf("%d",&ary2[i]);
   }
   printf("\n  second array elements are: \n");
   for(i=0;i<size2;i++){
        printf("%d  ",ary2[i]);
   }

   total= size1+size2;
   index1=0;
   index2=0;

   for(index=0;index<total;index++){
        if(index1>=size1 || index2>=size2){
            break;
        }

        if(ary1[index1] < ary2[index2]){
            merge[index] = ary1[index1];
            index1++;
        }else{
            merge[index] = ary2[index2];
            index2++;
        }
   }

   while(index1 < size1){
        merge[index] = ary1[index1];
        index++;
        index1++;
    }
    while(index2 < size2)
    {
        merge[index] = ary2[index2];
        index++;
        index2++;
    }

   printf("\n after merged Array..... : \n");
    for(i=0; i<total; i++){
        printf("%d  ", merge[i]);
    }
}
