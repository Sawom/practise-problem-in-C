#include<stdio.h>
#include<string.h>
int main(){
    char strng1[50],ch;
    int i,d;
    printf("Enter  a sentence : \n");
    gets(strng1);
    printf("Enter  which character??: \n");
    ch=getchar();
///scanf("%c",&ch); /// both are correct
    for(i=0;strng1[i]!='\0';i++){
        if(strng1[i]==ch){
            printf("%c is found at = %d position\n",ch,i);
        }
    }
}
