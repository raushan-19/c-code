// print:-    *****
//    ****
//    ***
//    **
//    *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) // Rows ke liye loop
    {
        for (int j = 1; j <= i; j++) // Har row me stars print karne ka loop
        {
            printf("*");
        }
        printf("\n"); // New line for next row
    }
    return 0;
}
