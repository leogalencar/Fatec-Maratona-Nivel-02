#include <stdio.h>
 
int main() {
 
    double array[100];

    scanf("%lf", &array[0]);
    printf("N[0] = %.4f\n", array[0]);

    for (int i = 1; i < 100; i++)
    {
        array[i] = array[i - 1] / 2;

        printf("N[%d] = %.4f\n", i, array[i]);
    }
 
    return 0;
}
