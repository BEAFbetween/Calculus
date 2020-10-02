#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int deg=0;

    printf("Degree?\n");
    scanf("%d",&deg);

    float coefficients[deg];          // Initialising coefficients array
    float powers[deg];                // Initialising array of powers

    for (int i=0;i<=deg;i++)
    {
        printf("Coefficient for degree %d?\n",i);
        scanf("%f",&coefficients[i]);
        powers[i]=i;
    }

    for (int j=0;j<=deg;j++)        // Differentiating coefficients
    {
        coefficients[j]=coefficients[j]*j;
    }

    printf("Final equation: ");

    for (int k=0;k<=deg;k++)
    {
        if (k>=0 && k<deg)
        {
            printf("%gx^%g + ",coefficients[k],powers[k]);
        }
        else
        {
            printf("%gx^%g",coefficients[k],powers[k]);
        }
    }

    return 0;
}