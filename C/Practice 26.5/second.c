#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int k=0; k<N; k++)
    {
        scanf("%d", &arr[k]);
    }
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N-1; i++)
        {
            if (arr[i]>arr[(i+1)])
            {
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}