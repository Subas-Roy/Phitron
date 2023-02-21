#include <stdio.h>

void recurse(int n)
{
    if(n==0) return;
    printf("%d ", n);
    recurse(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    recurse(n);
    return 0;
}