#include <stdio.h>

int power(int base, int p)
{
    if (p != 0)
        return (base * power(base, p - 1));
    else
        return 1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", power(n, m));
    return 0;
}