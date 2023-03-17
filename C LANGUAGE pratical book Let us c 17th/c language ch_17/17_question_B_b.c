/*Create a structure to specify data of customers in a bank. The data
to be stored is: Account number, Name, Balance in account.
Assume maximum of 200 customers in the bank.
(1) Write a function to print the Account number and name of
each customer with balance below Rs. 100.
(2) If a customer requests for withdrawal or deposit, the form
contains the fields:
Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a program to give a message, “The balance is insufficient
for the specified withdrawal”, if on withdrawal the balance falls
below Rs. 100.*/

typedef struct data_bank
{
    char ac_no[15];
    /*Range of integer variable is -2147483648 to +2147483647 but ac no is 11 digit so we can't type complete 
    account number in int so we declair ac no as character*/
    char name[30];
    int balance;
} data;
void data_acc_low_bal(data);
void witd(data, int, int);
void deposit(data, int, int);
#include <stdio.h>
#include <string.h>
int main()
{
    data d[200];
    int noc;
    printf("Enter the number of the customer::");
    scanf("%d", &noc);
    for (int i = 0; i < noc; i++)
    {
        printf("\nEnter the bank deatils of the %d customer::\n", i + 1);
        printf("Account number:");
        scanf("%s", d[i].ac_no);
        printf("Enter the bank holder name:");
        fflush(stdin);
        gets(d[i].name);
        printf("Enter Account Balance:");
        scanf("%d", &d[i].balance);
        fflush(stdin);
    }
    printf("\n::::Account number and name of each customer with balance below Rs. 100::::\n\n");
    for (int i = 0; i < noc; i++)
    {
        if (d[i].balance < 100)
        {
            data_acc_low_bal(d[i]);
        }
    }
    char acno[15];
    int amount, choice;
    char p = 'y';
    while (p == 'y')
    {
        printf("Enter account number and amount:");
        scanf("%s", acno);
        scanf("%d", &amount);
        fflush(stdin);
        int c;

        for (int i = 0; i < noc; i++)
        {
            /*Because string value never compare by   if ((d[i].ac_no) == (acno))*/

            c = strcmp(d[i].ac_no, acno);
            if (c == 0)
            {

                printf("\nPlese enter code: 1 for deposit and 0 for withdrwal::");
                scanf("%d", &choice);
                if (choice == 1)
                {
                    deposit(d[i], amount, choice);
                    break;
                }
                else if (choice == 0)
                {
                    witd(d[i], amount, choice);
                    break;
                }
                else
                {
                    printf("You choose wrong choice Please choose valid choice::\n");
                    continue;
                    i = i - 1;
                }
            }
        }
        if (c != 0)
        {
            printf("Something went worng! \nPlese enter valid account number::\n\n");
        }
        printf("\nWould you want to perform another work(For yes=y and no=another character)::\n");
        fflush(stdin);
        scanf("%c", &p);
    }

    return 0;
}
void data_acc_low_bal(data d)
{
    printf("Account number = %s and Bank holder name = ", d.ac_no);
    puts(d.name);
    printf("\n");
}
void witd(data det, int amo, int c)
{
    if (det.balance - amo < 100)
    {
        printf("\nThe balance is insufficient for the specified withdrawal:\n");
    }
    else
    {
        printf("\nWithrawal your money::\n");
        printf("Your availabe balance is %d:\n", det.balance - amo);
        printf("Thank you!\n");
        printf("Visit again!\a");
    }
}
void deposit(data det, int amo, int c)
{
    printf("\nDeposited your money::\n");
    printf("Now Your availabe balance is %d:\n", det.balance + amo);
    printf("Thank you!\n");
    printf("Visit again!\a");
}