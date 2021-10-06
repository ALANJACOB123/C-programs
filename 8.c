#include <stdio.h>
int main()
{
    FILE *fp;
    char fName[100];
    char c;
    printf("Enter the Name to create:-");
    scanf("%s", fName);
    fp = fopen(fName, "w");
    if (fp == NULL)
    {
        printf("file not created");
        return 0;
    }
    printf("file created successfully\n");
    printf("Enter The characters :-\n");
    while ((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    printf("\nData written successfully\n");
    fclose(fp);
    fp = fopen(fName, "r");
    if (fp == NULL)
    {
        printf("can't open file");
        return 0;
    }
    printf("contents of the file is:\n");
    while ((c = getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    return 0;
}
