#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // For loop to calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i; // Equivalent to sum = sum + i
    }

    // Display the final result
    printf("The sum of the first %d numbers is: %d\n", n, sum);

    return 0;
}
