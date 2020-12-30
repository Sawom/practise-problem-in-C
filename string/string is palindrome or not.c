#include<stdio.h>
#include<string.h>
int main(){
    char strng1[50],strng2[50];
    int i,d;
    printf("Enter  a sentence : \n");
    gets(strng1);
    strcpy(strng2,strng1);
    strrev(strng2);
   d= strcmp(strng2,strng1);
    if(d==0){
        printf("%s is Palindrome \n",strng1);
    }else{
        printf("%s is not Palindrome \n",strng1);
    }
}
