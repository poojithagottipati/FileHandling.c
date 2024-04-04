#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    else {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        return reverseNumber(num / 10, rev);
    }
}
int main() {
    int num, reversedNumber;
    printf("Enter an integer: ");
    scanf("%d", &num);

    reversedNumber = reverseNumber(num, 0);

    printf("Reverse of %d is %d\n", num, reversedNumber);

    return 0;
}
/*
Enter an integer: 459
Reverse of 459 is 954
  */

