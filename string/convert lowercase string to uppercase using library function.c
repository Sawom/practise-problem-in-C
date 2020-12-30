#include<stdio.h>
int main(){
    char strng1[50];
    printf("Enter  a sentence : \n");
    gets(strng1);
    strupr(strng1);
    printf("after converting upper case:  %s\n",strng1);
}
