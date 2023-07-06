#include <stdio.h>
 
int main() {
 
    int num_of_cases, odd_sum, a, b, greatest;

    scanf("%d", &num_of_cases);

    for (int i = 0; i < num_of_cases; i++)
    {
        odd_sum = 0;

        scanf("%d%d", &a, &b);

        if (a > b)
        {
            greatest = a;
            a = b;
            b = greatest;
        }

        // If the a is even, then j should receive the next odd number (a + 1), else if a is odd, then j should also receive the next odd number (a + 2)
        for (int j = (a % 2 == 0) ? a + 1 : a + 2; j < b; j += 2)
        {
            odd_sum += j;
        }

        printf("%d\n", odd_sum);
    }
 
    return 0;
}
