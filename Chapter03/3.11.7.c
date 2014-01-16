#include <stdio.h>
int main(void)
{
    float centimetre;
    float rate = 2.54;
    
    printf("Please enter your height in centimetre:\n");
    scanf("%f", &centimetre);
    printf("Your height is %f inch.\n", centimetre / rate);
    return 0;
}