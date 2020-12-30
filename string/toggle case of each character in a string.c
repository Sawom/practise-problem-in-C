#include<stdio.h>
int main(){
    char strng1[50];
    int i;
    printf("Enter  a sentence : \n");
    gets(strng1);

    for(i=0;strng1[i]!='\0';i++){
        if(strng1[i]>='A'&&strng1[i]<='Z'){
            strng1[i]=strng1[i]+32;
        }
        else if(strng1[i]>='a'&&strng1[i]<='z'){
            strng1[i]=strng1[i]-32;
        }
    }
    printf("after converting toggle case=  %s\n",strng1);
}
