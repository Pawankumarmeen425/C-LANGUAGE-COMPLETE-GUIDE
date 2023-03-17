#include<stdio.h>

void display ();/*function prototype*/

int main (){
int a;
printf("Initializing display function\n");
display(); /*Function call*/
/*In the place of function call the result of function definition would be print.If we change
 place of function call then the result of functin definition would be print that place*/
printf("Display function finised its work\n");   
 
return 0;
}
/*Function defination*/
void display (){
    printf("This is display\n");
}