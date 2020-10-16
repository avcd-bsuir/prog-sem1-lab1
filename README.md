[![License](https://img.shields.io/badge/license-CC%20BY--NC--SA%204.0-blue.svg)](https://bit.ly/cc-by-nc-sa-40)

# Usage

To compile and run a program use:
```
$ ./build.sh gcc src/<filename>
```

Executable will be started automatically. It can be found in `build/scr/` folder.

# Semester \<1\> lab \<1\>

## Task \<1\>

The traffic lights for pedestrians is programmed as follows: at the beginning of each hour a green signal is on for three minutes, then red is on for two minutes, green again for three minutes, etc. Enter a real number t, which represents the time in minutes, elapsed since the beginning of the next hour. Determine what color signal is on for pedestrians at this moment.

Original (ru):

Работа светофора для пешеходов запрограммирована следующим образом: в начале каждого часа в течение трех минут горит зеленый сигнал, затем в течение двух минут — красный, в течение трех минут — опять зеленый и т. д. Ввести вещественное число t, означающее время в минутах, прошедшее с начала очередного часа. Определить, сигнал какого цвета горит для пешеходов в этот момент.

## Task \<2\>

A two-digit number is given. Determine if a digit is included in it.

Original (ru):

Дано двузначное число. Определить, входит ли в него цифра.

## Task \<3\>

Digits of two two-digit numbers are given, written as a2a1 and b2b1, where a1 and b1 are the number of ones, a2 and b2 are the number of tens. Get the digits of a number equal to the difference of the given numbers. Number-decreasing, number-subtracted and number-difference cannot be determined.

Original (ru):

Даны цифры двух двузначных чисел, записываемых в виде a2a1 и b2b1, где a1 и b1 — число единиц, a2 и b2 — число десятков. Получить цифры числа, равного разности заданных чисел. Число-уменьшаемое, число-вычитаемое и число-разность не определять.

# Credits

Written by Alexey Filich.

# License

This repository is licensed under [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International](LICENCE.md).

# Notes

For compiling with SDL2:
```
-lmingw32 -lSDL2main -lSDL2
```

For compiling with ncurses
```
-lncursesw
```

## Description for some `include` files:

- stdarg.h

    Variable arguments with `va_list args; va_start(args, last_variable_in_function); va_arg(args, type)`.

- stdbool.h

    `True` and `false`.

- stdio.h

    `printf`, `scanf`, `NULL`, etc.

- stdlib.h

    Memory: `malloc`, `calloc`, `free`, \
    Random: `rand`, `srand`.

- string.h

    `memset`, `memcpy`, `memmove`.

- time.h

    `time(0)`.
