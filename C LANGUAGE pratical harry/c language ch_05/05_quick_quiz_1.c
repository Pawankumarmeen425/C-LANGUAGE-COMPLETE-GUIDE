/*Write a proram with three function:
1> Good Morning function which prints "Good Morning".
2> Good Afternoon function which prints "Good Afternoon".
3> Good Night function which prints "Good Night".
main() should call all of these in order 1 2 3 */
#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main (){
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    
return 0;
}
void GoodMorning (){
    printf("Good Morning Pawan\n");
}
void GoodAfternoon (){
    printf("Good Afternoon Pawan\n");
}
void GoodNight (){
    printf("Good Night Pawan\n");
}