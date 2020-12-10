#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'  ){
        printf("%c is alphabet \n",ch);
    }else if(ch>='0' && ch<='9'){
         printf("%c is digit \n",ch);
    }else{
         printf("%c is special character\n",ch);
    }

}

