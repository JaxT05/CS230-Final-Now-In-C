#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print_binary(char hex_input)
{
    for (int i = 3; i >= 0; i--)
    {
        printf("%d", (hex_input >> i) & 1);
    }
    printf("\n");
}

void convert_to_decimal(char hex_input)
{
    if (hex_input & 64)
    {
        print_binary(hex_input - 55);
    }
    else
    {
        print_binary(hex_input - 48);
    }
}
int main()
{
    while (1)
    {
        char hex_input;
        printf("Enter single hex digit:\n");
        scanf(" %c", &hex_input);
        // input validation
        hex_input = toupper(hex_input);

        if (hex_input == 'X')
        {
            printf("-\n");
            return 0;
        }
        else if (hex_input > 70)
        {
            printf("* Please use a hex digit [0-F].\n");
        }

        else
        {
            convert_to_decimal(hex_input);
        }
    }
}
