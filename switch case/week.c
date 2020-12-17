#include<stdio.h>
int main(){
    int week;
    printf("enter week number....\n");
    scanf("%d",&week);

    switch(week){
        case 1:
            printf("saturday\n");
            break;
       case 2:
            printf("sunday\n");
            break;
       case 3:
            printf("monday\n");
            break;
      case 4:
            printf("tuesday\n");
            break;
      case 5:
            printf("wednesday\n");
            break;
     case 6:
            printf("thrusday\n");
            break;
    case 7:
            printf("friday\n");
            break;
    default:
            printf("invalid. input from (1 -7) \n");
    }
}
