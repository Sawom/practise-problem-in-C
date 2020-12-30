#include<stdio.h>
int main(){
    char strng[50];
    int len,i;
   len=0;
    printf("enter a sentence : \n ");
    gets(strng);
    for(i=0;strng[i]!='\0';i++){
        len++;
    }
    printf("length = %d",len);
}
