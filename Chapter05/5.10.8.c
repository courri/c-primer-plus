#include <stdio.h>

int main(void)
{
    char c = 'a';
    while (c <= 'g')
    printf("%5c", c++);
    printf("\n");
    return 0;
}

