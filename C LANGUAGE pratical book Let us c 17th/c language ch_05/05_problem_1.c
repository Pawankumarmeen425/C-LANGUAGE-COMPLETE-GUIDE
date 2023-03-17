/* Write a program to calcuate pay of 10  employees. Overtime is paid at the rate of RS. 12.00 per hour for every
hour worked above 40 hours. Assume that employee do not work for fractional part of an hour.  */

#include<stdio.h>

int main (){
    int hour, i=1; 
    float ot_pay;
    while (i<=10)
    {
        printf("\nEnter %d number employee no.of hour worked:\n",i);
        scanf("%d",&hour);
        if (hour>=40)
        {
            ot_pay=(hour-40)*12;
        }
        else{
            ot_pay=0;
        }
        printf("Nomber %d Enployee worked house=%d.\nOvertime pay that paid to the employee=%f.\n",i ,hour,ot_pay);
         i++;
          }
    
return 0;
}