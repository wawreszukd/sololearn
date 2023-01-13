#include <stdio.h>

struct course{
    int id;
    char title[40];
    float hours;
};
struct student{
    int age;
    int grade;
    char name[40];
};
int main(void){
    struct student s1;
    struct student s2;
    s1.age = 19;
    s1.grade = 9;
    sprintf(s1.name,"John Bighimer");

    s2.age=22;
    s2.grade=10;
    sprintf(s2.name,"Batman Jokerson");
    printf("Student %s, %d\n",s1.name,s1.age);
    printf("Student %s, %d\n",s2.name,s2.age);
    return 0;
}