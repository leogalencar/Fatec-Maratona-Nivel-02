#include <stdio.h>
 
int main() {
 
    int array[1000], number;

    scanf("%d", &number);

    for (int i = 0, j = 0; i < 1000; i++, (i % number == 0) ? j = 0 : j++)
    {
        array[i] = j;

        printf("N[%d] = %d\n", i, array[i]);
    }
 
    return 0;
}
