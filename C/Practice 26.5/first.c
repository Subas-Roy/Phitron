#include <stdio.h>
int main()
{
   float x, y;
   
   float* p = &x;
   float* q = &y;

   scanf("%f %f", p, q);

   float average = (*p + *q) / 2;

   printf("%f", average);

   return 0;
}