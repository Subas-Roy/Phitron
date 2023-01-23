#include<stdio.h>
int main()
{
   int N;
   scanf("%d", &N);
   int arr[N];
   int* ptr = arr;
   for(int i=0; i<N; i++)
      scanf("%d", ptr+i);
   // Pointer again points back to first array element
   ptr=arr;
   for(int i=0; i<N; i++)
      printf("%d ", *ptr+i);
      
   return 0;
}