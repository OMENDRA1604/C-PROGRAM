// Using array manipulation we can find the second largest element

#include <stdio.h>

int sec(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[temp] < arr[i])
        {
            temp = i; // for finding the largest element's position.
        }
    }

    int lar = arr[temp];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == lar)
        {
            arr[i] = -1;
        }
        printf("\n%d", arr[i]);
    }

    temp = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }

    return temp;
}

int main()
{
    int n, sec_larg;
    printf("Enter the number of elements of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sec_larg = sec(a, n);
    printf("\nSecond largest: %d", sec_larg);
    return 0;
}
