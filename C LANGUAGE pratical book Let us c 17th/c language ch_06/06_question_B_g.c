/*Write a program to print 24 hours of day with suitable
suffixes like AM, PM, Noon and Midnight.*/
#include<stdio.h>

int main (){
int hour=0;
for (int i = 0; i < 24; i++)
{
    if (hour==0)
    {
        printf("12:00 Midnight\a\n");
        
    }
    else if (hour==12)
    {
        printf("12:00 Noon\a\n");
    }
    else if (hour<12)
    {
        printf("%d:00 A.M\n",hour);
    }
    else if (hour>12)
    {
        printf("%d:00 P.M\n",hour);
    }
    
    hour++;
}


return 0;
}