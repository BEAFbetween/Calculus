#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int deg=0;
    
    printf("What is the degree of the polynomial?\n");
    scanf("%d",&deg);
    
    for (int i=0; i<=deg; i++)
    {
        double coef=0;      // Initialising coefficient for degree deg-i
        printf("Coefficient of x power %d?\n",deg-i);
        scanf("%lf",&coef);
    }
    return 0;
}