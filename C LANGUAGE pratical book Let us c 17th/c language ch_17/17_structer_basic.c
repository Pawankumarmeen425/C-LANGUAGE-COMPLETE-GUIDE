#include<stdio.h>

int main (){
     struct book {
         int pages;float price; char name;
     };
     struct book b[10];

for (int  i = 0; i < 10; i++)
{
      printf("Enter the  pages , price and name of %d book:\n",i+1);
      scanf("%d %f %s",&b[i].pages,&b[i].price,&b[i].name);
}
for (int  i = 0; i < 10; i++)
{
    printf("%d %f %s",b[i].pages,b[i].price,b[i].name);
}


return 0;
}