#include <stdio.h>
 
int main() {
 
    int num_of_cases, nth_term;
    unsigned long long fibonacci_numbers[61] = {0, 1};

    scanf("%d", &num_of_cases);

    for (int i = 0; i < num_of_cases; i++)
    {
        scanf("%d", &nth_term);

        for (int j = 2; j <= nth_term; j++)
        {
            fibonacci_numbers[j] = fibonacci_numbers[j - 1] + fibonacci_numbers[j - 2];
        }

        printf("Fib(%d) = %llu\n", nth_term, fibonacci_numbers[nth_term]);
    }
  
    return 0;
}
