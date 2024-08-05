#include <stdio.h>
#include <math.h>

double FuncRoot1(double x)
{
    return 10 / (x - 4);
}

double FuncRoot2(double x)
{
    return (10 / x) + 4;
}

int main()
{
    double initial_1 = -1.5;
    double initial_2 = 5.5;
    double root1, root2, error1, error2;
    printf("No. of Iteration  error1 \t error2 \n");
    
    for (int i = 1; i < 6; i++)
    {
        root1 = FuncRoot1(initial_1);
        root2 = FuncRoot2(initial_2);
        printf("\t%d \t %lf\t%lf \n",i,-1.741657387 - root1,5.741657387 - root2 );
        printf("");
        initial_1 =root1;
        initial_2 = root2;
    }
    
    printf("\nFirst Root is : %lf \nSecond Root is : %lf",root1,root2);
    return 0;
}