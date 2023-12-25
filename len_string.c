#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int length;

    printf("Enter a string: ");
    fgets(string, 100, stdin);
    length = strlen(string);
    printf("Length of the string using strlen(): %d\n", length);
    return 0;
}
