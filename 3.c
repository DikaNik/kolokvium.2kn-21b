#include <stdio.h>

int main(void)
{
    int k;
    printf("K:");
    scanf("%i", &k);

    switch(k) 
    {
        case 1:
          printf("погано\n");
          break;
        case 2:
          printf("незадовільно\n");
          break;
        case 3:
          printf("задовільно\n");
          break;
        case 4:
          printf("добре\n");
          break;
        case 5:
          printf("відмінно\n");
          break;
        default:
          printf("помилка\n");
          break;
    }
    return 0;
          
}
