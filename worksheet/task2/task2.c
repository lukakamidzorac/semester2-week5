/*
Name: Luka Kamidzorac
Student ID: 201914015
*/

#include <stdio.h>

int main(void) {
    char hex[100];
    unsigned long long decimal = 0;
    int i = 0;

    // I read the hexadecimal number as a string
    scanf("%99s", hex);

    // I count the length to make sure it is not longer than 8 characters
    while (hex[i] != '\0') {
        i++;
    }

    // If the input is invalid, I print an error and stop
    if (i == 0 || i > 8) {
        printf("Error: Invalid Hexadecimal\n");
        return 0;
    }

    // I go through each character and convert it to its decimal value
    for (i = 0; hex[i] != '\0'; i++) {
        int value;

        if (hex[i] >= '0' && hex[i] <= '9') {
            value = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            value = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            value = hex[i] - 'a' + 10;
        } else {
            // If I find an invalid character, I print an error
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }

        // I build the decimal result step by step
        decimal = decimal * 16 + value;
    }

    // I print the final decimal number
    printf("%llu\n", decimal);

    return 0;
}