#include <stdio.h>
int main(){
    int nm;
    printf("Enter a number...\n");
    scanf("%d",&nm);
    switch(nm%2){
    case 0:
        printf("%d is even\n",nm);
        break;
     case 1:
        printf("%d is odd\n",nm);
        break;
    }
}
