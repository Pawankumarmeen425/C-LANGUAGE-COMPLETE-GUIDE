/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.*/
#include<stdio.h>

int main (){
    int ram_age,shyam_age,ajay_age;
    printf("Enter the age of Ram:\n");
    scanf("%d",&ram_age);
    printf("Enter the age of Shyam:\n");
    scanf("%d",&shyam_age);
    printf("Enter the  age of Ajay:\n");
    scanf("%d",&ajay_age);

    if (ram_age<shyam_age && ram_age<ajay_age)
    {
        printf("Ram is youngest of the three");
    }
    else if (shyam_age<ram_age && shyam_age<ajay_age)
    {
        printf("Shyam is youngest of the three");
    }
    else{
        printf("Ajay is youngest of three");
    }
    
    
return 0;
}