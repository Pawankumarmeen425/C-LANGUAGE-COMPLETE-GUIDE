
#include <stdio.h>

int main()
{
    struct address
    { 
        char phone[10];
        char city[20];
        int pin;
    };
    struct emp
    {
        char name[20];
        struct address a;
    };
    struct emp e = {"pawan", "2342342", "jaipur", 324};
    printf("name = %s , phone = %s , city = %s and pin = %d\n", e.name, e.a.phone, e.a.city, e.a.pin);
    return 0;
}