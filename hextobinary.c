#include <stdio.h>
#include <stdlib.h>

int convert_to_int(char char_input)
{
    // 2.	Translate it to the corresponding integer value. For example, 'A' is 10, 'E' is 14, '3' is 3, etc.
    int int_convert;
    return int_convert;
}
void print_binary(int int_convert)
{
    // 3.	Use bit wise operations to print 0 or 1 for each bit in the integer value.
}
int main()
{
    // 1.	Read a digit (character) from the user.
    char char_input;
    int int_convert;
    printf("Enter character input:\n");
    scanf("%c", char_input);

    int_convert = convert_to_int(char_input);

    print_binary(int_convert);

    return 0;
}
