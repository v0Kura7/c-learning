#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
    {
                for(int k = 0; k < n - i; k++)
        {
            printf("          ");
        }
        printf("%d*%d=%2d", i, i, i*i);
        for(int j = i - 1; j >= 1; j--)
        {
            printf("    %d*%d=%2d", i, j, i*j);
        }
        printf("    \n");
    }
    return 0;
}