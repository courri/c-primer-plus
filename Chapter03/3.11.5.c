#include <stdio.h>
int main(void)
{
    unsigned short age;
    float second = 3.156e7;
    
    printf("Please enter your age:\n");
    scanf("%hd", &age);
    printf("It's %.0f seconds.\n", age * second);
    return 0;
}