#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n = 0;
    int a = get_int("A:");
    int b = get_int("B:");
    
    for (int i = 0; a < b ; i++)
    {
        printf("%d\n", a);
        a++;
        n++;
    }
    printf("N = %d\n", n);
}
