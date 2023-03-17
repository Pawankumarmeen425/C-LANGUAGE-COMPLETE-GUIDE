/*If the marks obtained by a student in five different subjects
are input through the keyboard, write a program to find out
the aggregate marks and percentage marks obtained by the
student. Assume that the maximum marks that can be
obtained by a student in each subject is 100.*/
#include<stdio.h>

int main (){
    int m1,m2,m3,m4,m5,agger_marks;
    float pre_marks;
    printf("Enter the marks of five subject\n");
    scanf("%d\n%d\n%d\n%d\n%d",&m1,&m2,&m3,&m4,&m5);

    agger_marks=m1+m2+m3+m4+m5;
    pre_marks=agger_marks*100/500.0;
     
     printf("Aggregate marks of the students=%d\n",agger_marks);
     printf("Percentage marks of the students = %f\n",pre_marks);
return 0;
}