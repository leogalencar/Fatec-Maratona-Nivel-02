#include <stdio.h>
 
int main() {
 
    int number;
    int array[100][100] = {0};

    do
    {
        scanf("%d", &number);

        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                if (j < i)
                {
                    array[i][j] = array[j][i];
                }
                else
                {
                    array[i][j] = j + 1 - i;
                }
            }
        }

        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                if (j == 0)
                {
                    printf("%3d", array[i][j]);
                }
                else
                {
                    printf(" %3d", array[i][j]);
                }
            }

            printf("\n");
        }

        if (number != 0)
        {
            printf("\n");
        }
    }
    while (number != 0);
 
    return 0;
}
