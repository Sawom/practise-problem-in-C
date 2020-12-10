#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'  ){
        printf("%c is alphabet \n",ch);
    }else{
         printf("%c is not alphabet \n",ch);
    }

}
