#include <stdio.h>
int main(void)
{
    unsigned short ascii;
    printf("Please enter a ascii code.\n");
    scanf("%d", &ascii);
    printf("The character for %d is %c.\n", ascii, ascii);
    return 0;
}