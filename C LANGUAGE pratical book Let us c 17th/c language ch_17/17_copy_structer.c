
#include<stdio.h>
#include<string.h>
int main (){
    struct  employee
    {
        int age; float salary ; char name[10];
    };
    struct employee e1={13,2.3,"pawan"};
    struct employee e2,e3;
    e2.age=e1.age ;
    e2.salary =e1.salary;
    strcpy(e2.name,e1.name);
    e3=e2;
    printf("%s %d %f\n",e1.name,e1.age,e1.salary);
        printf("%s %d %f\n",e2.name,e2.age,e2.salary);
    printf("%s %d %f\n",e3.name,e3.age,e3.salary);

return 0;
}