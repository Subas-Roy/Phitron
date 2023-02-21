#include <stdio.h>
void recurse(int i, int n)
{
    if(i > n) return;
    printf("%d ", i);
    recurse(i+1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    recurse(1, n);
    return 0;
}