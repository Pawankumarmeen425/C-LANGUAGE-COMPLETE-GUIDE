/*While purchasing certain items, a discount of 10% is
offered if the quantity purchased is more than 1000. If quantity and
price per item are input through the keyboard, write a program to
calculate the total expenses.*/
#include <stdio.h>

int main()
{
    int qty, price;
    float dis=0, total_expenses;
    printf("Enter the quantity of certins items");
    scanf("%d", &qty);
    printf("Enter the price per item ");
    scanf("%d", &price);
    if (qty > 1000)
    {
        dis = 10;
    }
    // else
    // {
    //     dis = 0;
    // }
    total_expenses = (qty * price) - (qty * price * dis / 100.0);
    printf("Total expenses is= %f RS.", total_expenses);

    return 0;
}