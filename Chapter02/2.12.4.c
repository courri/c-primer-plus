#include <stdio.h>
void good_fellow(void);
void last_line(void);
int main(void)
{
    good_fellow();
    good_fellow();
    good_fellow();
    last_line();
    return 0;
}

void good_fellow(void)
{
    printf("For he's a jolly good fellow!\n");
}

void last_line(void)
{
    printf("Which nobody can deny!\n");
}

