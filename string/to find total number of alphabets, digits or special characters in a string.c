#include<stdio.h>
int main(){
    char strng1[50];
    int i,alphabets,digits,special;
    alphabets=digits=special=0;
    printf("Enter  a sentence : \n");
    gets(strng1);

    for(i=0;strng1[i]!='\0';i++){
        if((strng1[i]>='a'&&strng1[i]<='z')||(strng1[i]>='A'&&strng1[i]<='Z')){
            alphabets++;
        }
        else if(strng1[i]>='0'&&strng1[i]<='9'){
            digits++;
        }
        else{
            special++;
        }
    }
    printf("\nalphabets = %d \n",alphabets);
    printf("digits = %d \n",digits);
    printf("special = %d \n",special);
}
