#include<stdio.h>
int main(){
    int num,i;
    printf("Enter which number ...  \n");
    scanf("%d",&num);

    printf("here is your  multiplication table  \n");
    for(i=1;i<=10;i++){
        printf("%d   *   %d =  %d\n",num,i,(num*i));
    }
}
