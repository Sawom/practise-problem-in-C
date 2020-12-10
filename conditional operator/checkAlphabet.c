#include<stdio.h>
int main(){
    char ch;
    printf("enter  a character...\n");
    scanf("%c",&ch);

    (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')?printf("alphabet\n"):printf("not alphabet\n");
}
