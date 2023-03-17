#include<stdio.h>

int main (){
    int i=1,j=1;
    while (i++<15)
    {
        while(j++<20){
            if(j==15)
            // break;
            continue;
            printf("%d %d\n",i,j);
            
        }
    
    }
    
return 0;
}