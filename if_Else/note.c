#include<stdio.h>
int main(){
    int amnt;
    int note500,note100,note50,note20,note10,note5,note2,note1;
    note500=note100=note50=note20=note10=note5=note2=note1=0;

    printf("Enter amount... \n");
    scanf("%d",&amnt);

    if(amnt>=500){
        note500=amnt/500;
        amnt= amnt- (note500*500);
    }if(amnt>=100){
        note100=amnt/100;
        amnt= amnt- (note100*100);
    }
    if(amnt>=50){
        note50=amnt/50;
        amnt= amnt- (note500*50);
    }if(amnt>=20){
        note20=amnt/20;
        amnt= amnt- (note20*20);
    }if(amnt>=10){
        note10=amnt/10;
        amnt= amnt- (note10*10);
    }if(amnt>=5){
        note5=amnt/5;
        amnt= amnt- (note5*5);
    }if(amnt>=2){
        note2=amnt/2;
        amnt= amnt- (note2*2);
    }if(amnt>=1){
        note1=amnt/1;
        amnt= amnt- (note10*1);
    }

    printf("note500 = %d\n",note500);
    printf("note100 = %d\n",note100);
    printf("note50 = %d\n",note50);
    printf("note20 = %d\n",note20);
    printf("note10 = %d\n",note10);
    printf("note5 = %d\n",note5);
    printf("note2 = %d\n",note2);
    printf("note1 = %d\n",note1);
}
