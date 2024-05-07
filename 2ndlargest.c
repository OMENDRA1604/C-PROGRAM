#include<stdio.h>
int sec(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        if(temp<arr[i] && arr[i]<arr[i+1])
        temp=arr[i];
        
    }
    return temp;

}

int main()
{
    int n,sec_larg;
    printf("Enter the number of elements of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sec_larg=sec(a,n);
    printf(" : %d",sec_larg);
    return 0;

    
}
