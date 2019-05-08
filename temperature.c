#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variables to be used later
    char ot;
    char dt;
    int temp = 0;

    do
    {
        ot = get_char("What is the original temperature unit? Please indicate with K, C, or F:  ");
    }
    while( ot != 'K' && ot != 'C' && ot != 'F');

    do
    {
        dt  = get_char("What is the desired temperature unit? Please indicate with K, C, or F: ");
    }
    while( dt != 'K' && dt != 'C' && dt != 'F');

        printf("What is the temperature? ");
        scanf("%i", &temp);

    // begin if else if statement for conversions
    if (ot == 'K' && dt == 'C')
    {
        temp = temp - 273.15;
        printf("Conversion complete: %i degrees C\n", temp);
    }

    else if (ot == 'K' && dt == 'F')
    {
        temp = (temp * 9/5 - 459.67);
        printf("Conversion complete: %i degrees F\n", temp);
    }

    else if (ot == 'C' && dt == 'K')
    {
        temp = temp + 273.15;
        printf("Conversion complete: %i K\n", temp);
    }

    else if (ot == 'C' && dt == 'F')
    {
        temp = ((temp * 9/5) + 32);
        printf("Conversion complete: %i degrees F\n", temp);
    }

    else if (ot == 'F' && dt == 'K')
    {
        temp = ((temp - 32) * 5/9 + 273.15);
        printf("Conversion complete: %i K\n", temp);
    }

    else if (ot == 'F' && dt == 'C')
    {
        temp = ((temp - 32) * 5/9);
        printf("Conversion complete: %i degrees C\n", temp);
    }

    // if the input was incorrect, promt user to recheck their inputs
    else
    {
        printf("No conversion completed, please recheck your inputs.\n");
    }
}