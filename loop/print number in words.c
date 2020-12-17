#include<stdio.h>
int main(){
    int num,reverse=0;
    printf("Enter a number :\n");
    scanf("%d",&num);

    while(num!=0){
        reverse = (reverse*10)+(num%10);
        num=num/10;
    }

    while(reverse!=0){
        switch(reverse%10){
        case 0:
            printf("zerro  ");
            break;
       case 1:
            printf("one  ");
            break;
     case 2:
            printf("two  ");
            break;
       case 3:
            printf("three  ");
            break;
        case 4:
            printf("four  ");
            break;
       case 5:
            printf("five  ");
            break;
     case 6:
            printf("six  ");
            break;
       case 7:
            printf("seven  ");
            break;
       case 8:
            printf("eight  ");
            break;
       case 9:
            printf("nine  ");
            break;
        }
        reverse=reverse/10;
    }
}
