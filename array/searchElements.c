#include<stdio.h>
int main(){
   int i,size,ary[50],pos=-1,value;
   printf("Enter size of an array: \n");
   scanf("%d",&size);
   printf("\n Enter array elements: \n");
   for(i=1;i<=size;i++){
        scanf("%d",&ary[i]);
   }
   printf("Enter value: \n");
   scanf("%d",&value);
   for(i=1;i<=size;i++){
    if(ary[i]==value){
        pos=i;
        break;
    }
   }

   if(pos==-1){
        printf("sorry! not found! \n");
   }else{
       printf("%d is found  at %d position \n",value,pos);
   }
}
