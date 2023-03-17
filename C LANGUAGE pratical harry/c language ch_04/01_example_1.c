/*Example 4.1: The marks obtained by a student in 5 different subjects are
input through the keyboard. The student gets a division as per the
following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student*/

#include<stdio.h>

int main (){
    int Hindi,English,Math,Physic,Chemistry,total;
    float pre;
    printf("Enter marks of each subject respectivly\n");
    scanf("%d\n %d\n %d\n %d\n %d", &Hindi,&English,&Math, &Physic, &Chemistry);

    total = (Hindi+English+Math+Physic+Chemistry);
    printf("Total Marks=%d\n", total);

    pre = total*100/500.0;
    printf("Aggrigate percantage =%f\n",pre);
    
    if(pre>=60.0){
        printf("First division");
    }
    else if (pre>=50.0){
        printf("Second division");
    }
    else if(pre>=40.0){
        printf("Third division");
    }
    else
    {
        printf("Fail");
    }
    
return 0;
}