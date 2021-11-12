#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int  n;

    do
    {
        n = get_int("N: ");
    }
    while (n <= 0);


    for(int k=1; k <= n; k++)
    {
        int square = k*k;

        if(square == n) 
        {
            printf("%i\n", k);
            break;
        } 
        else if(square > n) 
        {
            int k1 =  k - 1;
            printf("%i\n", k1);
            break;
        }
    }
