#include <stdio.h>
 
int main() {
 
    char operation;
    int line;
    float array[12][12], result = 0;

    scanf("%d", &line);
    
    scanf(" %c", &operation);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &array[i][j]);

            if (i == line)
            {
                result += array[i][j];
            }
        }
    }

    result = (operation == 'M') ? result / 12 : result;

    printf("%.1lf\n", result);
 
    return 0;
}
