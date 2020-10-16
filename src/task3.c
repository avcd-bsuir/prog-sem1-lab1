// License: CC BY-NC-SA 4.0
/*
 * task3.c
 *
 * Digits of two two-digit numbers are given, written as a2a1 and b2b1,
 * where a1 and b1 are the number of ones, a2 and b2 are the number of tens.
 * Get the digits of a number equal to the difference of the given numbers. Number-decreasing,
 * number-subtracted and number-difference cannot be determined.
 *
 * Written by AlexeyFilich
 * 11 sep 2020
 */

#include <stdio.h>

int main(int argc, char* args[]) {
    int a, b, sub; // Variable declaration
    for (;;) {
        printf("Input: two two-digit numbers: ");
        scanf("%d %d", &a, &b); // Reading
        sub = a - b; // Substraction
        char subch[4]; // Character array for substraction digits
        sprintf(subch, "%d", sub); // Write sub to subch
        printf("Digits: ");
        for (int i = 0; i < 4; i++) // For each array element
            if (subch[i] != '-') // If it is not the minus sign
                printf("%c ", subch[i]); // Print it
        printf("\n");
    }
    return 0;
}
