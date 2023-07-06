#include <stdio.h>
 
int main() {
 
    int array[10];

    scanf("%d", &array[0]);

    for (int i = 1; i < 10; i++)
    {
        array[i] = array[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, array[i]);
    }
 
    return 0;
}
