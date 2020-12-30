#include<stdio.h>
#include<string.h>
int main(){
    char strng[100],result;
    int freq[256]={0};
    int max= -1,len,i;
    printf("Enter  a sentence : \n");
    gets(strng);
    len=strlen(strng);

    for(i=0;i<len;i++){
        freq[strng[i]]++;
    }

    for(i=0;i<len;i++){
        if(freq[strng[i]]>max){
            max=freq[strng[i]];
            result=strng[i];
        }
    }
    printf("The Maximum Occurring Character in a Given String  = %c \n",result);
}
