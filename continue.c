//WAP to print odd no. from 1 to 100
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;//means skip the statement
        }
        printf("%d ", i);
    }
    return 0;
}