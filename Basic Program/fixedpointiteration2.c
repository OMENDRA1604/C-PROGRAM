#include <stdio.h>


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
    double root1, root2, R1 = 0 ,R2 = 0;
    printf("No. of Iteration  E(First Root)  E(Second Root)\n");

    for (int i = 1; i < 11; i++)
    {
        root1 = FuncRoot1(initial_1);
        root2 = FuncRoot2(initial_2);
        printf("\t%d \t %lf\t%lf", i, root1 - R1, root2 - R2);
        printf("\n");
        initial_1 = root1;
        initial_2 = root2;
        R1 = root1;
        R2 = root2;
    }

    printf("\nFirst Root is : %lf \nSecond Root is : %lf", root1, root2);
    return 0;
}