#include<stdio.h>
int main(){
    char strng1[50];
    int i,word;
    word=1;
    printf("Enter  a sentence : \n");
    gets(strng1);

    for(i=0;strng1[i]!='\0';i++){
        if(strng1[i]==' '||strng1[i]=='\n'||strng1[i]=='\t'){
            word++;
        }
    }
    printf("Total words = %d\n ",word);
}
