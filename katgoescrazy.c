#include <stdio.h>

void print_bin_r(int num, int bits_shifted, int total_bits) {
    if (bits_shifted < total_bits)
        print_bin_r(num >> 1, ++bits_shifted, total_bits);
    
    printf("%d", num & 1);
}
void print_bin(int num) {
    print_bin_r(num, 1, 4);
    printf("\n");
}

void loop(char input) {
    if (input & 64)
        print_bin(input - 55);
    else
        print_bin(input - 48);
}

int main() {
    while (1) {    
        char input;

        printf("Enter a hex digit [0-F]\n>> ");
        scanf(" %c", &input);

        if (input == 'X')
            return 0;
        else
            loop(input);

        printf("\n");
    }

    return 0;
}

/* ASCII | DECI | Target | Binary
 *   0   |  48  |   0    |  0000
 *   1   |  49  |   1    |  0001
 *   2   |  50  |   2    |  0010
 *   3   |  51  |   3    |  0011
 *   4   |  52  |   4    |  0100
 *   5   |  53  |   5    |  0101
 *   6   |  54  |   6    |  0110
 *   7   |  55  |   7    |  0111
 *   8   |  56  |   8    |  1000
 *   9   |  57  |   9    |  1001
 * 
 *   A   |  65  |   10   |  1010
 *   B   |  66  |   11   |  1011
 *   C   |  67  |   12   |  1100
 *   D   |  68  |   13   |  1101
 *   E   |  69  |   14   |  1110
 *   F   |  70  |   15   |  1111
 */