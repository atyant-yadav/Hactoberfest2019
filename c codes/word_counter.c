#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, total_char = 0;
    int c;
    for (; (c = getchar()) != EOF; total_char++)
    {
        if (c == ' ')
        {
            ++blanks;
        }
        else if (c >= '0' && c <= '9')
        {
            ++digits;
        }
    };
    printf("blanks : %d, digits : %d, total_charcters : %d\n\n", blanks, digits, total_char);
    return 0;
};
