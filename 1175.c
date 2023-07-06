#include <stdio.h>
 
int main() {
 
    int array[20], reversed_array[20];

    for (int i = 0, j = 19; i < 20; i++, j--)
    {
        scanf("%d", &array[i]);
        reversed_array[j] = array[i];
    }

    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, reversed_array[i]);
    }
 
    return 0;
}
