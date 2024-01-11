#include <stdio.h>

int x = 25;  // Global variable

int main() {
    printf("%d\n", x);  // Print the global variable

    int x = 5;  // Local variable with the same name as the global variable
    printf("%d\n", x);  // Print the local variable
    printf("%d\n", x);  // Use the scope resolution operator to access the global variable

    return 0;
}
