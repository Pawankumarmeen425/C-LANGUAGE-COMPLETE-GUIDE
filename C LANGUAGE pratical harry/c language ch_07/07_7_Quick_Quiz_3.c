#include<stdio.h>
void display (int*array );
int main (){
    int array[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",array[i][j]);
        }
        
    }
    display(array);
return 0;
}
void display(int *array){
   for (int i = 0; i < 3; i++)
   {
       printf("{ ");
       for (int j = 0; j < 2; j++)
       {
           printf("%d , ",array[i][j]);
       }
       printf("}\n");
   }
   
}