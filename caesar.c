#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check user input on command line
    if (argc == 1)
    {
        printf("You did not enter a command line argument for the Caesar encryption key.\n");
        printf("Please re-run the program and input one non-negative integer as a command line argument.\n");
        return 1;
    }

    // check if the use entered more than one command line argument
    else if (argc > 2)
    {
        printf("You entered too many command line arguments for the Caesar encryption key.\n");
        printf("Please re-reun the program and input one non-negative integer as a command line argument.\n");
        return 1;
    }
    else
    {
        //declare key as an int, assume that the user will only type integers at the prompt
        int key = atoi(argv[1]);

        string message = get_string("What is your message: ");

        for (int i = 0, n = strlen(message); i < n; i++)
        {
            // add key to upper case letters
            if (isupper(message[i]))
                printf("%c", (message[i] + key));

            // add key to lowercase letters
            else if (islower(message[i]))
                printf("%c", (message[i] + key));

            // leave non-letters along
            else
                printf("%c", message[i]);
        }
    }
    // Extra space at end
    printf("\n");
}