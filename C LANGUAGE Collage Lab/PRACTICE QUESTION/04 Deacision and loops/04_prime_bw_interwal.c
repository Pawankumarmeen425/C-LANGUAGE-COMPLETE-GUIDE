/*C Program to Display Prime Numbers Between Two Intervals.*/
#include<stdio.h>

int main (){
    int num1,num2,flag;
    printf("Enter two interwal::\n");
    scanf("%d%d",&num1,&num2);
    printf("\n::Prime number between two intervals %d and %d:::\n\n",num1,num2);
  
    while (num1<num2)
    {  flag=0;
        if (num1==1)
        {
            num1++;
            continue;
        }
        for (int i = 2 ; i <= num1/2; i++)
        {
           if (num1%i==0)
           {
               flag=1;
               break;
           }
           
        }
       
        if (flag==0)
        {
            printf("%d\t",num1);
        }
        
        num1++;
      
    }
    
    
return 0;
}