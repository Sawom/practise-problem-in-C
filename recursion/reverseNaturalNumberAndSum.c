#include<stdio.h>
int rev(int num){
    if(num==0){
        return 0;
    }
    else{
        printf("%d  ",num);
        return num+rev(num-1);
    }

}
int main(){
    int num;
    printf("Enter num: \n");
    scanf("%d",&num);
    printf("numbers are given below:  \n");
    int result = rev(num);
    printf("\n\nsum= %d  ",result);
}
