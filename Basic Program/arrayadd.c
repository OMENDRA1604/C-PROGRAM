/*Write a program to find the number of pairs of integers in a given array of integers whose sum is 
equal to a specified number.*/

#include<stdio.h>
void sum(int arr[],int n ,int m)
{
    printf("Pair of integers :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]+arr[j]==m)
        printf("%d , %d\n",arr[i],arr[j]);
        else printf("NOT PRESENT");
        }
    }

}

int main()
{
    int n,m;
    printf("Enter the number of elements of array :\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the addition of numbers :\n");
    scanf("%d",&m);
    sum(a,n,m);
    return 0;

    
}
