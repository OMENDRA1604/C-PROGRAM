#include<stdio.h>
int sum(int arr[],int n)
{
    int add=0;
    for(int i=0;i<n;i++)
    {
        add=add+arr[i];
    }
    return add;

}
int avg(int arr[],int n)
{
    return (sum(arr,n)/n);
}
int main()
{
    int n,average,add;
    printf("Enter the number of elements of array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    add=sum(a,n);
    average=avg(a,n);
    printf("The sum of elements of array is : %d \n the average of elements of array is : %d",add,average);
    return 0;

    
}
