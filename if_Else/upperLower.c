#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'  ){
        printf("%c is upper case \n",ch);
    }else if(ch>='a' && ch<='z' ){
         printf("%c is lower case \n",ch);
    }

}

