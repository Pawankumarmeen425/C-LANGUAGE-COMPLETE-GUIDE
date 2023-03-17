#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main (){
    GoodMorning();
return 0;
}
void GoodMorning (){
    printf("Good Morning Pawan\n");
    GoodAfternoon();
}
void GoodAfternoon (){
    printf("Good Afternoon Pawan\n");
    GoodNight();
}
void GoodNight (){
    printf("Good Night Pawan\n");
}