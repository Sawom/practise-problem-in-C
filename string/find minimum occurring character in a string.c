#include<stdio.h>
#include<string.h>
int main(){
    char strng[100],result;
    int freq[256]={0};
    int min= 0,len,i;
    printf("Enter  a sentence : \n");
    gets(strng);
    len=strlen(strng);

    for(i=0;i<len;i++){
        freq[strng[i]]++;
    }

    for(i=0;i<256;i++){
        if(freq[i]!=0){
            if(freq[min]==0 || freq[i] <freq[min]){
                min=i;
            }
        }
    }
    printf("The Maximum Occurring Character in a Given String  = %c \n",min);
}
