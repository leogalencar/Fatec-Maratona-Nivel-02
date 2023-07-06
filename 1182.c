#include <stdio.h>
 
int main() {
 
    char operation;
    int column;
    float array[12][12], result = 0;

    scanf("%d", &column);
    
    scanf(" %c", &operation);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &array[i][j]);

            if (j == column)
            {
                result += array[i][j];
            }
        }
    }

    result = (operation == 'M') ? result / 12 : result;

    printf("%.1lf\n", result);
 
    return 0;
}
