#include <stdio.h>
 
int main() {
 
    int even[5], odd[5], number;
    
    for (int i = 0, e = 0, o = 0; i < 15; i++)
    {
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            even[e] = number;
            e++;
        }
        else
        {
            odd[o] = number;
            o++;
        }

        if (o == 5 || i == 14)
        {
            for (int j = 0; j < o; j++)
            {
                printf("impar[%d] = %d\n", j, odd[j]);
            }

            o = 0;
        }

        if (e == 5 || i == 14)
        {
            for (int j = 0; j < e; j++)
            {
                printf("par[%d] = %d\n", j, even[j]);
            }

            e = 0;
        }
    }
 
    return 0;
}
