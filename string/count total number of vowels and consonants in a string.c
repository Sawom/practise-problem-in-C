#include<stdio.h>
int main(){
    char strng1[50];
    int i,vowels,consonants;
    vowels=consonants=0;
    printf("Enter  a sentence : \n");
    gets(strng1);

    for(i=0;strng1[i]!='\0';i++){
        if(strng1[i]=='a'||strng1[i]=='e'||strng1[i]=='i'||strng1[i]=='o'|| strng1[i]=='u'||
           strng1[i]=='A'||strng1[i]=='E'||strng1[i]=='I'||strng1[i]=='O'|| strng1[i]=='U'){
            vowels++;
        }
        else if((strng1[i]>='a'&&strng1[i]<='z')||(strng1[i]>='A'&&strng1[i]<='Z')){
            consonants++;
        }
    }
    printf(" vowels = %d\n", vowels);
    printf(" consonants = %d\n", consonants);
}
