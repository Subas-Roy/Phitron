#include<stdio.h>

void area_of_circle(int R)
{
   float area = 3.14159*pow(R, 2);
   printf("%f", area);
}

int main()
{
   int R;
   scanf("%d", &R);
   area_of_circle(R);

   return 0;
}