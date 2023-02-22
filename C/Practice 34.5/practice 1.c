#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile==NULL)
    {
        printf("File not found\n");
        return 0;
    }
    outputFile = fopen("output.txt", "w");

    int a, b, c, d, e;
    fscanf(inputFile, "%d %d %d %d %d", &a,&b,&c,&d,&e);
    fprintf(outputFile, "%d %d %d %d %d\n", a,b,c,d,e);

    fclose(inputFile); // close open files
    fclose(outputFile);
    return 0;
}
