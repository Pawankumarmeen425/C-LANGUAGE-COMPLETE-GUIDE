/*If the string "Alice in wonder land" is fed to the following scanf( )
statement, what will be the contents of the arrays str1, str2, str3
and str4?
scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ;*/
#include<stdio.h>

int main (){
    char str1[20] ,str2[20] , str3[20] , str4[20];
    printf("Enter the above string::");
    scanf("%s%s%s%s",str1,str2,str3,str4);
    printf("str1 hold :: %s\n",str1);
    printf("str2 hold :: %s\n",str2);
    printf("str3 hold :: %s\n",str3);
    printf("str4 hold :: %s\n",str4);

return 0;
}