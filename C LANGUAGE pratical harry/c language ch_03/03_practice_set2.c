/*Write a program to find out wheather a student is pass or fail.If it requires total 40% and 
 at least 33% in each subject to pass.Assume 3 subject and take marks as an input from user.*/

#include <stdio.h>

int main()
{
    int physic, chemistry, math;
    float total;
    printf("Enter physic marks\n");
    scanf("%d", &physic);

    printf("Enter chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter math marks\n");
    scanf("%d", &math);

    total = (physic + chemistry + math) / 300.0 * 100;
    //     if((total<40)||physic<33||chemistry<33||math<33){
    // printf("Your total percentage is %f and you are failed",total);
    //     }
    //     else
    //     {
    //       printf("Your total percentage is %f and you are passed",total);
    //     }
    // 2nd  wAY
    if ((total > 40) && physic > 33 && chemistry > 33 && math > 33)
    {
        printf("Your total percentage is %f and you are passed", total);
    }
    else
    {
        printf("Your total percentage is %f and you are failed", total);
    }

    return 0;
}