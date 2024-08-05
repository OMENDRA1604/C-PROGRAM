#include<stdio.h>
#include<stdbool.h>
bool isPowerOfTwo(int n) 
{
    int a,b;
    while(n>1 )
    {
        a=n/2;
        b=n%2;
        if(b!=0)
        {
            return 0;
            break;
        }
        n=a;
    }
    if(n==1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,n ;
    scanf("%d",&n);
    a = isPowerOfTwo(n);
    printf("\n%d",a);
    return 0;
}