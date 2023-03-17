/*Input:
<h1> This is a heading </h1>
Output:
This is a heading
Input:
<span> This is a heading1 </span>
Output:
This is a heading
*/

#include <stdio.h>
#include <string.h>
void parser(char *p, char *t);

int main()
{
    char string[100];
    char tar[100];
    printf("Enter the string:\n");
    gets(string);
    printf("String Before Parser::\n%s\n",string);
    parser(string, tar);
    strcpy(string, tar);
    printf("The HTML parser is::\n%s\n", string);
    return 0;
}
void parser(char *p, char *t)
{
    int n = 0;

    while (*p != '\0')
    {

        if (*p == '<')
        {
            n = 1;
            p++;
            continue;
        }
        else if (*p == '>')
        {
            n = 0;
            p++;
            continue;
        }

        if (n == 0)
        {
            *t = *p;
            t++;
        }

        p++;
    }
    *t = '\0';
}