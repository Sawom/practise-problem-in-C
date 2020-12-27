#include<stdio.h>
#include<math.h>
int reverse(int num,int len){
    if(len==1){
        return num;
    }
    else {
        return (((num%10)*pow(10,len-1))+reverse(num/10, --len));
    }
}

int main(){
    int result,num,len;
    int length=0,temp;
    printf("Enter num: \n");
    scanf("%d",&num);
    temp=num;

    while(temp!=0){
        length++;
        temp=temp/10;
    }
    result= reverse(num,length);
    if(num==result){
        printf("Palindrome\n");
    }
    else{
        printf("not Palindrome\n");
    }
}
