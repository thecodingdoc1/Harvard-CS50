#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n = get_int("What number do you want use for collatz: ");
    n = abs(n);
    int collatz(int n);

    printf("Total number of steps: %i\n", collatz(n));
}

int collatz(int n)
    {
        //while (ans != 1)
        // base case
        if (n == 1) {
            return 0;
        // even numbers
        } else if ((n % 2) == 0) {
            int ans = n/2;
            printf("%i\n", ans);
            return 1 + collatz(n/2);
        // odd numbers
        } else {
            int ans = 3 * n + 1;
            printf("%i\n", ans);
            return 1 + collatz(3 * n + 1);
        }
    }
