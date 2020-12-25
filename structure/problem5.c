#include<stdio.h>

struct student{
    char name[30];
    int id;
    float marks;
    char grade;
};

char Grade(struct student s){
    char grade;

    if(s.marks>=90){
        grade='A' ;
    }
    else if(s.marks>=80&& s.marks<=89){
        grade='B' ;
    }
    else if(s.marks>=70&& s.marks<=79){
        grade='C' ;
    }
    else if(s.marks>=60&& s.marks<=69){
        grade='D' ;
    }
    else if(s.marks>=50&& s.marks<=59){
        grade='E' ;
    }
    else if(s.marks<50){
        grade='F' ;
    }
    return grade;
}

float findHighest(struct student h[],int size){
    int i;
    float high;
    high=h[0].marks;
    for(i=0;i<size;i++){
        if(h[i].marks>high){
            high=h[i].marks;
        }
    }
    return high;
}

int main(){
    int size,i;
    printf("enter how many students? \n");
    scanf("%d",&size);
    struct student s1[size];
    char result;
    float hi;

    for(i=0;i<size;i++){
         printf("enter student's no: %d \n",i+1);
        printf("enter student's name: \n");
        fflush(stdin);
        gets(s1[i].name);
        printf("enter student's id: \n");
        scanf("%d",&s1[i].id);
        printf("enter student's marks: \n");
        scanf("%f",&s1[i].marks);
        printf("\n");
    }
    printf("\n\n");

    for(i=0;i<size;i++){
         printf("student's information no: %d \n",i+1);
        printf("name: %s\n",s1[i].name);
        printf("id: %d\n",s1[i].id);
        printf("marks: %.2f\n",s1[i].marks);
        result= Grade(s1[i]);
        printf("grade: %c \n",result);
        printf("\n");
    }
     hi=findHighest(s1,size);
    printf("highest marks = %.2f",hi);
}
