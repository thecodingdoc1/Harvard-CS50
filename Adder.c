#include <cs50.h>
#include <stdio.h>

int add_two_ints(int a, int b);

int main(void)
{
    // ask for input
    printf("give me an integer: ");
    int x = get_int();
    printf("give me another integer: ");
    int y = get_int();

    // add the two numbers together
    int z = add_two_ints(x, y);

    //output the result
    printf("the sum of %i and %i is %i\n", x, y, z);
}

int add_two_ints(int a, int b)
{
    int sum = a + b;
    return sum;
}