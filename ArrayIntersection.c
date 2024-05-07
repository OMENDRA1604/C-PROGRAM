//intersection of Array
#include <stdio.h>
int intersection(int *arr1, int n, int *arr2, int m, int *ptr)
{
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (*(arr1 + i) == *(arr2 + j) && count < 1)
            {
                *(ptr++) = *(arr1 + i);
                count++;
                l++;
            }
        }
    }
    return l;
}

int main()
{
    int n, m, z;
    printf("Enter the number of elements of largest array : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of first array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements of second array :\n ");
    scanf("%d", &m);
    int b[m], c[n];
    printf("Enter the elements of second array : \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    z = intersection(a, n, b, m, c);
    int *ptr = c;
    printf("the intersection of both the arrays is : \n");
    for (int i = 0; i < z; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}