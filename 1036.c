#include <math.h>
#include <stdio.h>
 
int main() {
 
    double A, B, C, delta, root1, root2;

    scanf("%lf%lf%lf", &A, &B, &C);

    if (A == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    // Calculate delta --> b² - 4ac
    delta = (B * B) - (4 * A * C);

    if (delta < 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    // Calculte roots
    root1 = (-B + sqrt(delta)) / (2 * A);
    root2 = (-B - sqrt(delta)) / (2 * A);
    
    // Print roots
    printf("R1 = %.5f\n", root1);
    printf("R2 = %.5f\n", root2);

    return 0;
}
