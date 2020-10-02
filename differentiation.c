#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int terms=0;
    float coefficients[100];          // Initialising coefficients array
    float powers[100];                // Initialising array of powers
    int type=0;

    printf("What type of differentiation will I be doing today sir?\n"
    "1. Polynomial"
    "2. Trigonometric"
    "3. Exponential"
    "4. Exit program");
    scanf("%i",&type);

    switch(type)
    {
        case 1:                         // Polynomial differentiation
            printf("Number of terms?\n");
            scanf("%d",&terms);

            for (int i=0;i<terms;i++)
            {
                printf("Coefficient for degree %d?\n",i);
                scanf("%f",&coefficients[i]);
                powers[i]=i;
            }

            for (int j=0;j<terms;j++)        // Differentiating coefficients
            {
                coefficients[j]=coefficients[j]*j;
            }

            printf("Final equation: ");

            for (int k=0;k<terms;k++)
            {
                if (k>=0 && k<terms-1)
                {
                    printf("%gx^%g + ",coefficients[k],powers[k]);
                }
                else
                {
                    printf("%gx^%g",coefficients[k],powers[k]);
                }
            }
            break;

        case 2:                         // Trigonometric differentiation

            break;

        case 3:                         // Exponential differentiation

            break;

        case 4:

            return 0;
        
        default:
            printf("Invalid entry!\n");
            return 0;
    }


    return 0;
}