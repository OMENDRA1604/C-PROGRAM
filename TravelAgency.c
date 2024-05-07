#include <stdio.h>
#include <string.h>
struct drivers
{
    char name[100];
    int license_No;
    char Route[100];
    int KMS;
};

int main()
{
    int n;
    printf("Enter the number of Drivers : ");
    scanf("%d", &n);
    for (int i= 1; i <= n; i++)
    {
        struct drivers D[i];
        
            printf("Enter the details of %d driver : \n", i);
            scanf("%s", &D[i].name);
            scanf("%d", &D[i].license_No);
            scanf("%s", &D[i].Route);
            scanf("%d", &D[i].KMS);
    }
    for (int i= 1; i <= n; i++)
    {
        struct drivers D[i];
            printf("Details of the %d driver : \n", i);
            printf("NAME : %s \n", D[i].name);
            printf("LICENSE NO : %d\n", D[i].license_No);
            printf("ROUTE : %s \n", D[i].Route);
            printf("KILOMETERS : %d\n", D[i].KMS);
        
    }
    return 0;
}