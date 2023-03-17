/*Write a general-purpose function to convert any given year into its
Roman equivalent. Use these Roman equivalents for decimal
numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.
Example:
Roman equivalent of 1988 is mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.*/
#include<stdio.h>
int roman (int,int,char);
int main (){
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);
    printf("Roman Equivalent of year %d = ",year);
    year=roman(year,1000,'m');
    year=roman(year,500,'d');
    year=roman(year,100,'c');
    year=roman(year,50,'l');
    year=roman(year,10,'x');
    year=roman(year,5,'v');
    year=roman(year,1,'i');
    
return 0;
}
int roman (int year,int k,char ch){
   int d;
   d=year/k;
   for ( int i = 1; i <=d; i++)
   {
       printf("%c",ch);
   }
   return (year=year%k);
}

