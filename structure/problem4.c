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

int main(){
    struct student s1;
    char result;
    printf("enter student's name: \n");
    fflush(stdin);
    gets(s1.name);
    printf("enter student's id: \n");
    scanf("%d",&s1.id);
    printf("enter student's marks: \n");
    scanf("%f",&s1.marks);

    printf("\n\n");

    printf("name: %s\n",s1.name);
    printf("id: %d\n",s1.id);
    printf("marks: %.2f\n",s1.marks);

   result= Grade(s1);
   printf("grade: %c\n",result);
}
