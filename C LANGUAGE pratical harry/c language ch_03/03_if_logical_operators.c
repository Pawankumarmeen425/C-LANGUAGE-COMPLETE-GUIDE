#include<stdio.h>

int main (){
    int age, vippass;
    printf("Enter your age\n");
    scanf("%d", &age);
    //  if ((age <=70 && age>=18))
    if ((age <=70 && age>=18)||(vippass=0))
   /* if we assign value of vippass = any non zero number then  it consider true ststement in C language and if we 
      type 0 then it consider false*/
    //   if ((age <=70 && age>=18)||!(vippass=0))  /* in this true statement become false and false statement becometrue*/
    // if ((age <=70 && age>=18)&&(vippass=1))/  /* in this any one statement were worng then then result false*/
    {
        printf("you are above 18 and below 70,you can drive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }
    
return 0;
}