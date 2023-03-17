/* The current year and the year in which the employee
joined the organization are entered through the keyboard. If the
number of years for which the employee has served the organization is
greater than 3, then a bonus of Rs. 2500/- is given to the employee. If
the years of service are not greater than 3, then the program should do
nothing.*/
#include<stdio.h>

int main (){
    int cy, yoj,yos,bouns=2500;
    printf("Enter current year ");
    scanf("%d",&cy);
    printf("Enter joining year");
    scanf("%d",&yoj);
    yos=cy-yoj;
    if(yos>3){
        printf("Bouns of RS.%d is given to the employee",bouns);
    }
return 0;
}