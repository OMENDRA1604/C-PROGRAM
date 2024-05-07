#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,b;
    scanf("%d",&num);
    for(int i=1;num !=1;i++)
    {
        b=num%10;
        sum=sum+ b*pow(10,i);
    }
    if(num == sum)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}