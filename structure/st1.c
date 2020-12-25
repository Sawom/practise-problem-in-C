#include<stdio.h>
struct Person{
    char name[30];
    int age;
    float salary;
};

void display(struct Person  p){
    int i;
        printf("name = %s \n",p.name);
        printf("age = %d \n",p.age);
        printf("salary = %.2f \n",p.salary);
}

int main(){
    struct Person person[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter information for person = %d \n",i+1);
        printf("enter name: \n");
        fflush(stdin);
        gets(person[i].name);
        printf("enter age: \n");
        scanf("%d",&person[i].age);
        printf("enter salary: \n");
        scanf("%f",&person[i].salary);
        printf("\n");
    }

    for(i=0;i<3;i++){
        printf("information of person = %d \n",i+1);
        display(person[i]);
        printf("\n");
    }
}
