#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];
    char concatenatedString[200]; 

    printf("Enter the first string: ");
    fgets(string1, 100, stdin);  
    string1[strcspn(string1, "\n")] = '\0';  

    printf("Enter the second string: ");
    fgets(string2, 100, stdin);
    string2[strcspn(string2, "\n")] = '\0';  

    strcpy(concatenatedString, string1);  
    strcat(concatenatedString, string2);  

    printf("Concatenated string: %s\n", concatenatedString);

    return 0;
}
