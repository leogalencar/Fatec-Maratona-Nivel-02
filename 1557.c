#include <stdio.h>
 
int main() {
 
    int number, T;
    int array[100][100] = {0};

    do
    {
        T = 1;

        scanf("%d", &number);

        for (int i = 0, k = 1; i < number; i++, k *= 2)
        {
            for (int j = 0; j < number; j++)
            {
                if (j > 0)
                {
                    array[i][j] = array[i][j - 1] * 2; 
                }
                else
                {
                    array[i][j] = k;
                }
            }
        }

        for (int i = array[number - 1][number - 1]; i >= 10; i /= 10)
        {
            T++;
        }

        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                if (j == 0)
                {
                    printf("%*d", T, array[i][j]);
                }
                else
                {
                    printf(" %*d", T, array[i][j]);
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
