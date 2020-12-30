#include<stdio.h>
int main(){
    char strng1[50],strng2[50];
    printf("Enter  a sentence : \n");
    gets(strng1);
    printf("Enter  another sentence : \n");
    gets(strng2);
    strcat(strng1,strng2);
    printf("After concatenaton : %s  \n ",strng1);
}
