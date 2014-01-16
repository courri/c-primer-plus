#include <stdio.h>
int main(void)
{
    float quart;
    float rate = 3.0e-23;
    
    printf("Please enter quart:\n");
    scanf("%f", &quart);
    printf("The number of molecules is %.0f.\n", quart * 950 / rate);
    return 0;
}