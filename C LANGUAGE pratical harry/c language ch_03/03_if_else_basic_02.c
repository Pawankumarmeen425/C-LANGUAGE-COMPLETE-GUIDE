#include<stdio.h>

int main (){
    int x;
    printf("Enter a number=");
    scanf("%d",&x);
    if(x>0)
    { 
        printf("positive number");  /*for one statement don't required curly braket{}
        it required for more then one statement.*/
    }
  else
    {
        printf("Non positive number");   /*else doesnot come withot if But if can come.*/
    }
return 0;
}