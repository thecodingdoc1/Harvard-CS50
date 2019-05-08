#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //set array for your answer, in this case, 3 initials and a terminal null element
    char initials[4];

    // get name from user
    string s = get_string("Name: ");

    //set integer to be used to go through the upper case one letter at a time
    int length = 0;

    // for loop to go through each letter of name
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // as going through the for loop, check if each letter is uppercase, the do the if statement, if it is not uppercase, then do nothing and move to next
        if (isupper(s[i]))
        {
            // assign each uppercase letter to a segment of the array initials, length notes the position in the array, then increase the value of length by one to prepare for the next uppercase letter
            initials[length] = s[i];
            length++;
        }
    }
    // place a NULL element at the end of the array which is determined by the length value
    initials[length] = '\0';
    // grab the string, initials, as a string is a collection of characters, and print it out
    printf("%s\n", initials);
}