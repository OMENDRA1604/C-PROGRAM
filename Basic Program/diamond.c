#include <stdio.h>
int main()
{
    int i, j, n;
    char s =' ';
    printf("Enter the number of lines : \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            printf("%c",s);
            for (j = 0; j < i; j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
        if (i > n / 2)
        {
            printf("\t");
            for (j = 0; j < n - i; j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
    }
    return 0;
}