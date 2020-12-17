#include <stdio.h>
int main(){
    int nm;
    printf("Enter a number...\n");
    scanf("%d",&nm);

    switch(nm>0){
    case 1:
        printf("%d is positive\n",nm);
        break;

    case 0:
        switch(nm<0){
        case 1:
            printf("%d is negative \n",nm);
            break;
         case 0:
            printf("%d is zerro \n",nm);
            break;
        }
    }

}
