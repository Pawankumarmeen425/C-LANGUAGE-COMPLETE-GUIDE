// #include<stdio.h>
// #include<string.h>
// struct student
// {
//         int id;
//         int marks;
//         char fav_char;
//         char name[34];
// };

// int main (){
//     struct student s1;
//     s1.id=1;
//     s1.marks=342;
//     s1.fav_char='d';
//     strcpy(s1.name,"Pawan");
//     printf("The id is %d.\n",s1.id);
//     printf("The marks is %d.\n",s1.marks);
//     printf("The fav_char is %c.\n",s1.fav_char);
//     printf("The name is %s.\n",s1.name);
    
// return 0;
// }

#include<stdio.h>
#include<string.h>
union student
{
        int id;
        int marks;
        char fav_char;
        char name[34];
};

int main (){
    union student s1;
    s1.id=1;
    s1.marks=342;
    s1.fav_char='d';
    strcpy(s1.name,"Pawan");
    printf("The id is %d.\n",s1.id);
    printf("The marks is %d.\n",s1.marks);
    printf("The fav_char is %c.\n",s1.fav_char);
    printf("The name is %s.\n",s1.name);
    
return 0;
}

/*In the structer we can access all the variables at a time. And Get desaired output.
But in the case of union we can access one variable at a time. If we try to access all the variabls of 
the union in that case we can get desired result of last variabls and all other variable are incrapted . */