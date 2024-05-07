#include<stdio.h>

int main()
{
    int n , count = 0;
    printf("Enter the number of elements of array : \n");
    scanf("%d",&n);
    int num[n],i,j,target;
    printf("Enter the integers :\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the target :\n ");
     scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]+num[j]==target)
            {
                printf("Numbers exists and There positions are : \n");
                printf("[%d ,%d]",i,j);
                count++;
            }
        }
    }
    if(count==0){
        printf("Number Do Not Exists");
    }
    return 0;
}