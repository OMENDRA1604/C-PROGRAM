#include <stdio.h>
int hIndex(int *citations, int citationsSize)
{
    int j = citationsSize, count = 0;
    int i=0;
    while(i<citationsSize)
    {
        if (*(citations + i) < j)
        {
            count = 0;
            j--;
        }
        else
        {
            i++;
            count++;
        }
    }
    return count;
}

int main()
{
    int citations[5] = {3, 0, 6, 1, 5}, n;
    n = hIndex(citations, 5);
    printf("%d", n);
    return 0;
}