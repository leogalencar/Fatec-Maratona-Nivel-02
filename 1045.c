#include <stdio.h>
 
int main() {
 
    double A, B, C, greatest;

    scanf("%lf%lf%lf", &A, &B, &C);

    // Arrange in decreasing order
    if (B > A && B > C)
    {
        greatest = B;
        B = A;
        A = greatest;
    }
    else if (C > A)
    {
        greatest = C;
        C = A;
        A = greatest;
    }

    // Verify if is not a triangle
    if (A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    /* VERIFY THE TYPE OF THE TRIANGLE BY THE LARGEST ANGLE*/

    // Verify if is a right triangle
    if ((A * A) == ((B * B) + (C * C)))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    // Verify if is an obtuse triangle
    else if ((A * A) > ((B * B) + (C * C)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    // Verify if is an acute triangle
    else if ((A * A) < ((B * B) + (C * C)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    /* VERIFY THE TYPE OF THE TRIANGLE BY THE LENGTH OF THE SIDES*/

    // Verify if is an equilateral triangle
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    // Verify if is an isosceles triangle
    else if ((A == B && B != C) || (A != B && B == C) || (A == C && C != B))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
 
    return 0;
}
