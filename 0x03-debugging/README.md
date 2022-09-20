# Testing for a positive or negative function

main.c file contains:

#include "main.h"

/**
* main -tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void) 
{
    int i;

    i = 98;
    positive_or_negative(i);

    return (0);
}

main.h file contains:
#ifndef MAIN-H
#define MAIN-H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN-H */


