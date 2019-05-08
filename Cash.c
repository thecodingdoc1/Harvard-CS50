#include <cs50.h>
#include <stdio.h>
#include <math.h>

float change;
int coins = 0;
int quantity;
int quarters = 0;
int dimes = 0;
int nickles = 0;
int pennies = 0;

int main(void)
{
    // get total amount in positive integer
    do
    {
        change = get_float("Amount: ");
    }
    while(change <= 0);

  // convert dollars into cents
  quantity = round(change * 100.00);


    while(quantity >= 25)
    {
        quantity -= 25;
        coins++;
        quarters++;
    }
    while (quantity >= 10)
    {
        quantity -= 10;
        coins++;
        dimes++;
    }
    while (quantity >= 5)
    {
        quantity -= 5;
        coins++;
        nickles++;
    }
    while (quantity >= 1)
    {
        quantity -= 1;
        coins++;
        pennies++;
    }
    printf("You get %i coins.\n", coins);
    printf("You get %i quarters, %i dimes, %i nickles, and %i pennies.\n", quarters, dimes, nickles, pennies);
}