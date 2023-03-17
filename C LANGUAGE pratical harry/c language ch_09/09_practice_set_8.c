/*Create a structer repersenting a bank account of a customer. You choose filed your 
choice*/
#include <stdio.h>

int main()
{
    struct bank
    {
        int ac_no;
        char name[20];
        int phone_no;
        float blance;
    };
    struct bank deatils[5];
    for (int i = 0; i < 2; i++)
    {
        printf("::Enter the deatils of %d person::\n", i + 1);
        printf("Account number:");
        scanf("%d", &deatils[i].ac_no);
        printf("Account Holder name:");
        gets(deatils[i].name);
        printf("Phone number:");
        scanf("%d", &deatils[i].phone_no);
        printf("Account Balance:");
        scanf("%f", &deatils[i].blance);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\n****Deatils of %d person***\n\n", i + 1);
        printf("Account number = %d\n", deatils[i].ac_no);
        printf("Account Holder name = ");
        puts(deatils[i].name);
        printf("Phone number = %d\n", deatils[i].phone_no);
        printf("Account Balance = %f\n", deatils[i].blance);
    }

    return 0;
}