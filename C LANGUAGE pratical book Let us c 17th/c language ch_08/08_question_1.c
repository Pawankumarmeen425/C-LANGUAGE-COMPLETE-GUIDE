/*Any year is entered through the keyboard. Write a function to
determine whether the year is a leap year or not.*/
#include<stdio.h>
void leap(int year);
int main (){
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    leap (year);
return 0;
}
void leap(int year){
    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
    {
        printf("Entered year is leap year.\n");
    }
    
    else{
        printf("Entered year is not leap year.\n");
    }
}