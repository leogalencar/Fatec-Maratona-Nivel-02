#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {

    int num_of_lines;
    char message[1000] = "", reversed_message[1000];

    scanf("%d", &num_of_lines);

    for (int i = 0; i < num_of_lines; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            reversed_message[j] = '\0';
        }

        scanf(" %[^\n]s", message);

        for (int j = 0, k = strlen(message) - 1, l = round(strlen(message) / 2); k >= 0; j++, k--, l--)
        {
            if (isalpha(message[k]))
            {
                reversed_message[j] = message[k] + 3;
            }
            else
            {
                reversed_message[j] = message[k];
            }
        }
        
        for (int j = strlen(message) - 1, k = (int) ceil(strlen(message) / 2.0); j > 0; j--, k--)
        {
            if (k > 0)
            {
                reversed_message[j] -= 1;
            }
        }

        printf("%s\n", reversed_message);
    }

    return 0;
}
