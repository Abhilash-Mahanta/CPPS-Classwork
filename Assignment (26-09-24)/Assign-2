/*Write a C program that calculates the *factorial* of a given positive integer using a user-defined function.*/

#include <stdio.h>

int find_largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3, largest;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = find_largest(num1, num2, num3);

    printf("The largest number is: %d\n", largest);

    return 0;
}
