#include<stdio.h>
int main(){
    char strng1[50];
    int i;
    printf("Enter  a sentence : \n");
    gets(strng1);
    strlwr(strng1);
    printf("after converting upper case:  %s\n",strng1);
}
