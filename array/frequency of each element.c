#include<stdio.h>
int main(){
    int size,i,j,ary[50],freq[50],count;
    printf("Enter size of an array: \n");
    scanf("%d",&size);

    printf("Enter elements... \n");
    for(i=0;i<size;i++){
        scanf("%d",&ary[i]);
        freq[i]=-1;
    }

    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(ary[i]==ary[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
     printf("frequency of all elements... \n");
     for(i=0;i<size;i++){
        if(freq[i]!=0){
            printf("%d occurs = %d times \n",ary[i],freq[i]);
        }
     }
}
