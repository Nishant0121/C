#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100];
    int length;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    length = strlen(str1);
    printf("Length of the first string: %d\n", length);

    strcpy(str1, str2);
    printf("After copying, first string: %s\n", str1);

    strcat(str1, str2);
    printf("After concatenation, first string: %s\n", str1);

    int compareResult = strcmp(str1, str2);
    if (compareResult == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }
    char searchChar = 'a';
    char *searchResult = strchr(str1, searchChar);
    if (searchResult != NULL)
    {
        printf("Character '%c' found at position: %ld\n", searchChar, searchResult - str1);
    }
    else
    {
        printf("Character '%c' not found in the first string.\n", searchChar);
    }
}
