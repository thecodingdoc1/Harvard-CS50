    #include <cs50.h>
    #include <stdio.h>

    int main(void)
    {
            // Prompt user for height of tower
        int h;
        do
        {
            h = get_int("Height: ");
        }
        while (h < 0 || h > 23);

        // Make Pyramid with space in the middle and coin block
        for (int i = 0; i < h; i++)
        {
            // Make spaces for pyramid
            for (int s = 0; s < h - 1 - i; s++)
            {
                printf(" ");
            }

        // Print out this number of hashes
            for (int j = 0; j < i + 2; j++)
            {
                printf("#");
            }
            printf("  ");
            for (int j = 0; j < i + 2; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }