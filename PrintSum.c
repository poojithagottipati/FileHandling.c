#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumOfNaturalNumbers(n - 1);
}
int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int sum = sumOfNaturalNumbers(n);
    printf("Sum of natural numbers from 1 to %d is %d.\n", n, sum);

    return 0;
}
/*
Enter the value of n: 5
Sum of natural numbers from 1 to 5 is 15.
*/

