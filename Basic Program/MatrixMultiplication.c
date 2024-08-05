#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    printf("Enter the number of rows and columns of first matrix respectively : \n");
    scanf("%d %d",&a,&b);
    printf("Enter the number of rows and columns of second matrix respectively : \n");
    scanf("%d %d",&c,&d);
    int x[a][b],y[c][d],z[a][d];
    printf("Enter the elements of first Matrix : \n");
    for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&x[i][j]);
            }
        }
    printf("Enter the elements of second Matrix : \n");
    for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                scanf("%d",&y[i][j]);
            }
        }    
    if(b!=c)
    {
        printf("Matrix multiplication of given matrices is not possible"); 
    }
    else
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<d;j++)
            {
                z[i][j]=0;
                for(k=0;k<c;k++)
                {
                    z[i][j]=z[i][j]+ x[i][k]*y[k][j];
                }
            }
        }
        printf("Matrix multiplication :\n"); 
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("%d\t",z[i][j]); 
            }
            printf("\n");
        }
    }  
    return 0;     
}