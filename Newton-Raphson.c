#include <stdio.h>

int main() {
    double x , y;
    double deriv ;
    printf("Enter Initial Guess : ");
    scanf("%lf",&x);
    for(int i = 0; y!=0 ; i++)
    {
        deriv = 2*x;
        y= x*x - 64 ;
        x = x - (y/ deriv);
        
    }
    printf("\nSquare root of the 64 is : %lf",x);
   

    return 0;
}