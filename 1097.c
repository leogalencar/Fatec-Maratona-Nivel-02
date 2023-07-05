#include <stdio.h>
 
int main() {
 
    for (int i = 1, k = 7; i <= 9; i += 2, k += 2)
    {
        for (int j = k; j > (k - 3); j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }
 
    return 0;
}
