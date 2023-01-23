#include<stdio.h>

void evenUpper(char S[])
{
   int len = strlen(S);
   for(int i=0; i<len; i++)
   {
       if(S[i]%2==0)
           printf("%c", S[i]-32);
       else
          printf("%c", S[i]);
   }
}

int main()
{
   char S[50];
   scanf("%s", S);
   evenUpper(S);
   
   return 0;
}