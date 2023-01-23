#include<stdio.h>

void summ(int N, int arr[])
{
   int summ=0;
   for(int i=0; i<N; i++)
   {
       if(arr[i]%10==0)
           summ +=arr[i];
   }
   printf("%d", summ);
}

int main()
{
   int N, arr[30];
   scanf("%d", &N);
   for(int i=0; i<N; i++)
       scanf("%d", &arr[i]);
   summ(N, arr);

   return 0;
}