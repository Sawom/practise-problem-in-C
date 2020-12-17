#include <stdio.h>
int main(){
    int nm1,nm2;
    printf("Enter two number...\n");
    scanf("%d%d",&nm1,&nm2);

    switch(nm1>nm2){
        case 0:
            printf("%d is maximum\n",nm2);
            break;

        case 1:
            printf("%d is maximum\n",nm1);
            break;
    }
}
