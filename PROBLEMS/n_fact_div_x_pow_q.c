#include <stdio.h>

int main(void)
{
    int n, x, q = 0;
    scanf("%d %d", &n, &x);
    while (n > x)
    {
        q += (n / x);
        n /= x;
    }
    printf("%d\n", q);
}