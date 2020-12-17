#include<stdio.h>
int main(){
    int month;
    printf("enter number of month (1-12)....\n");
    scanf("%d",&month);

    switch(month){
        case 1:
            printf("month: january,  days:31 \n");
            break;
       case 2:
            printf("month: february,  days:28\n");
            break;
       case 3:
            printf("month: march,  days:31\n");
            break;
       case 4:
            printf("month: april,  days:30\n");
            break;
       case 5:
            printf("month: may,  days:31\n");
            break;
      case 6:
            printf("month: june,  days:30\n");
            break;
      case 7:
            printf("month: july,  days:31\n");
            break;
      case 8:
            printf("month: august,  days:31\n");
            break;
     case 9:
            printf("month: sreptember,  days:30\n");
            break;
     case 10:
            printf("month: october,  days:31\n");
            break;
     case 11:
            printf("month: november,  days:30\n");
            break;
     case 12:
            printf("month: december,  days:31\n");
            break;
     default:
            printf("invalid. input from (1 -12) \n");
    }
}
