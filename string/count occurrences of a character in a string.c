#include<stdio.h>
#include<string.h>
int main(){
    char strng1[50],ch;
    int i,count;
    count=0;
    printf("Enter  a sentence : \n");
    gets(strng1);
    printf("Enter  which character??: \n");
    scanf("%c",&ch);

    for(i=0;strng1[i]!='\0';i++){
        if(strng1[i]==ch){
            count++;
        }
    }
    printf("Total occurrences of %c = %d ",ch,count);
}
