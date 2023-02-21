#include <stdio.h>
int main()
{
    int n,num,i;
    int sum = 0,last_digit;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        last_digit = num%10;
        sum = sum + last_digit;
    }
    printf("%d",sum);
    return 0;
}