// #include<stdio.h>
// void change (int a);
// int main (){
//     int b = 384;
//     printf("The value of b before change is %d\n",b);
//     change(b);
//     printf("The value of b after change is %d\n",b);
// return 0;
// }
// void change (int a){
//     a = 332;

// }
#include<stdio.h>
int change (int a);
int main (){
    int b = 384;
    printf("The value of b before change is %d\n",b);
    change(b);
    printf("The value of b after change is %d\n",b);
return 0;
}
int change (int a){
    a = 332;
    return a;
} /*We can't change value of variable by call the function   */