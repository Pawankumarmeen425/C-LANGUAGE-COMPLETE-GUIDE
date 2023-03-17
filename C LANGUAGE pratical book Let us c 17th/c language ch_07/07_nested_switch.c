#include <stdio.h>

int main()
{
    int age,marks;
    printf("Enter age\n");
    scanf("%d", &age);
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    switch (age)
    {
    case 3:
        printf("The age is 3 \n");
        switch (marks)
        {
        case 50:
            printf("Your marks is 50.\n");
            break;
        
        default:
        printf("Your marks is not 50.\n");
            break;
        }
        break;  
    case 20:
        printf("The age is 20 \n");
        break;
    case 25:
        printf("The age is 25\n");
        break;
    default:
    printf("The age is not 3 , 20 and 25:");
        break;
    }
    return 0;
}