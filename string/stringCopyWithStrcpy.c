#include<stdio.h>
int main(){
    char strng1[50],strng2[50];
    printf("Enter  a sentence : \n");
    gets(strng1);
    strcpy(strng2,strng1);
    printf("string 1 = %s \n",strng1);
    printf("After copy string 2: %s \n",strng2);
}
