#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Name: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c %i\n", s[i], (int) s[i]);
    }
}