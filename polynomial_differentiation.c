#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int deg=0;
    
    printf("What is the degree of the polynomial?\n");
    scanf("%d",&deg);

    double coefficients[4];       // Initialising coefficients array
    double diff_coef[4];          // Initialising differentiated coefficients array
    double powers[4];             // Initialising powers array
    
    for (int i=0; i<=deg; i++)
    {
        printf("Coefficient of x power %d?\n",i);
        scanf("%lf",&coefficients[i]);
        printf("%d\n",coefficients[i]);
    }

    /* for (int j=0; j<=deg; j++)      
    {
        printf("%d",coefficients[j]);
    } */
    return 0;
}