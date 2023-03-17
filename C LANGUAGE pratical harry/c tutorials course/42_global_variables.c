#include <stdio.h>
int func1(int b)
{
    printf("The value of b inside the func1 is %d\n", b);
    return b * 10;
}
int b = 3553; /*This is a global variables since its declaires outside the main*/
int main()
{
    
    //  This is a local variables since its decalres inside the main
    int val = func1(b);
    printf("The vlaue of func1 is %d\n", val);
    int b = 234;
    val = func1(b);
    // NOw value of b is 234 take preference 
     printf("The vlaue of func1 after calling second time is %d\n", val);
    return 0;
}