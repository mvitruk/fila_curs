#include <stdio.h>

int main (void)
{
    for(int i=1; i<20; ++i)
    {
        if (i == 13) continue;
        if (i%7 == 0) continue;
            printf("Number i = %d ", i);
        if (i%3 == 0)
            printf("It is a multiple of 3!\n");
        else 
            printf("It's not a multiple of 3...\n");
    }

    return 0;

}