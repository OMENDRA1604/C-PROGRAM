// Reversing an array 
#include<stdio.h>
void rev(int* ptr,int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+n-i-1);
        *(ptr+n-i-1)=temp;
    }
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
    rev(a,n);
    printf("Array after reversing :");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;   
}