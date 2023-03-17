/*Calculate profit or loss*/

#include<stdio.h>

int main (){
    int cp,sp,p,l;
    printf("Enter cost price and selling price\n");
    scanf("%d\n%d",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if (p>0)
    {
        printf("The seller made a profit of RS.=%d",p);

    }
        if(l>0){
        printf("The seller lossed of RS.=%d",l);
    }
    if(p==0){
        printf("There is no loss, no profit");
    }
    
return 0;
}