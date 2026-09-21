#include <stdio.h>
/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    while (n < 0) {
        printf("Error: n cannot be negative.\n");
        printf("Enter a non-negative integer n: ");
        scanf("%d", &n);
    }

    long long res = factorial(n);
    printf("%d! = %lld\n", n, res);

    return 0;
}