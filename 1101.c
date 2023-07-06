#include <stdio.h>
 
int main() {
    
    int m, n, min, max, sum;
    
    do
    {
        sum = 0;
        
        scanf("%d %d", &m, &n);
        
        if (m > 0 && n > 0)
        {
            if (m < n)
            {
                min = m;
                max = n;
            }
            else
            {
                min = n;
                max = m;
            }
            
            for (int i = min; i <= max; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            
            printf("Sum=%d\n", sum);
        }
    }
    while (m > 0 && n > 0);
    
    return 0;
}
