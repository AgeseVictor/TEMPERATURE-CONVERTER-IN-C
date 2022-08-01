#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\n Is The Temperature in (C) or (F)? \n");
    scanf("%c", &unit);
    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Fahrenheit is : %.1f \n", temp);
    }
    else if (unit == 'F')
    {
        printf("Enter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("the Temperature in Celsius is :%1.f \n", temp);
    }
    else
    {
        printf("%c is not valid temp", unit);
    }

    // switch (unit)
    // {
    // case 'C':
    //     printf("Enter the temp in Celsius: ");
    //     scanf("%f", &temp);
    //     temp = (temp * 9 / 5) + 32;
    //     printf("The temperature in Fahrenheit is : %.1f \n", temp);
    //     break;
    // case 'F':
    //     printf("Enter the temp in Fahrenheit: ");
    //     scanf("%f", &temp);
    //     temp = ((temp - 32) * 5) / 9;
    //     printf("the Temperature in Celsius is :%1.f \n", temp);
    //     break;

    // default:
    //     printf("Enter a valid Key");
    //     break;
    // }

    return 0;
}