#include <stdio.h>
int main(void)
{
    int toes, toes2, toes3;
    
    toes = 10;
    toes2 = toes + toes;
    toes3 = toes * toes * toes;
    printf("toes = %d, sum = %d, cubed = %d\n", toes, toes2, toes3);
    return 0;
}