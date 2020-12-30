#include<stdio.h>
#include<string.h>
int main(){
    char strng1[50];
    int i;
    printf("Enter  a sentence : \n");
    gets(strng1);

    strrev(strng1);
    printf("after reverse string = %s\n ",strng1);
}
