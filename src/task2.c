// License: CC BY-NC-SA 4.0
/*
 * task2.c
 *
 * A two-digit number is given. Determine if a digit is included in it.
 *
 * Written by AlexeyFilich
 * 11 sep 2020
 */

#include <stdio.h>

int main(int argc, char* args[]) {
    int number, digit; // Declaring number and digit
    for (;;) {
        printf("Input: two-digit number and a digit separated by space: ");
        scanf("%d %d", &number, &digit); // Reading
        // Reminder of number divided by 10 is the second digit
        // number / 10 in integer type is the first digit
        if (number % 10 == digit || number / 10 == digit)
            printf("%d is a part of %d\n", digit, number); // If digit in number
        else
            printf("%d is not a part of %d\n", digit, number); // If digit is not in number
    }
    return 0;
}
