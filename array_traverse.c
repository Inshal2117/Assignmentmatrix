#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7; 

    printf("Odd-indexed elements:\n");

    for (int i = 0; i < n; i += 2) {  
        printf("%d\n", arr[i]);
    }

    return 0;
}
    