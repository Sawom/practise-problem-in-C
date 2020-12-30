#include<stdio.h>
int main(){
    char strng1[50],strng2[50];
    int com;
    printf("Enter  a sentence : \n");
    gets(strng1);
    printf("Enter  another sentence : \n");
    gets(strng2);

    com=strcmp(strng1,strng2);
    if(com==0){
        printf("both strings are  equal \n");
    }else{
         printf("both strings are not  equal \n");
    }
}
