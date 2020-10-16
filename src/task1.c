// License: CC BY-NC-SA 4.0
/*
 * task1.c
 *
 * The traffic lights for pedestrians is programmed as follows:
 * at the beginning of each hour a green signal is on for three minutes,
 * then red is on for two minutes, green again for three minutes, etc.
 * Enter a real number t, which represents the time in minutes,
 * elapsed since the beginning of the next hour.
 * Determine what color signal is on for pedestrians at this moment.
 *
 * Written by AlexeyFilich
 * 11 sep 2020
 */

#include <stdio.h>

int main(int argc, char* args[]) {
    float time;
    printf("Input time: ");
    scanf("%f", &time); // Read time
    time = (int)time % 5; // Reminder of time divided by 5 makes time be in range of 7 mins
    if (time >= 0 && time < 3)
        printf("Green\n");
    else
        printf("Red\n");
    return 0;
}
