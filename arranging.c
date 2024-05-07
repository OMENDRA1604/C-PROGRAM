/*Write a program to move all negative elements of an array of integers to the end of the array 
without changing the order of the positive and negative elements of the array*/
#include <stdio.h>
void arrange(int ptr[], int n)
{
    int b[n], j = 0;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > 0)
        {
            b[j] = ptr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] < 0)
        {
            b[j] = ptr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i] = b[i];
    }
}

int main()
{
    int n;
    printf("Enter the number of elements of array :\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    arrange(a, n);
    printf("\nArray after arranging :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}