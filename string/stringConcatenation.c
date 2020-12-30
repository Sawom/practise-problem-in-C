#include<stdio.h>
int main(){
    char strng1[50],strng2[50];
    int len,i,j;
    len=0;

    printf("Enter  a sentence : \n");
    gets(strng1);
    printf("Enter  another sentence : \n");
    gets(strng2);

    for(i=0;strng1[i]!='\0';i++){
        len++;
    }

    for(j=0;strng1[j]!='\0';j++){
        strng1[len+j]=strng2[j];
    }
    printf("After concatenaton : %s  \n ",strng1);
}
