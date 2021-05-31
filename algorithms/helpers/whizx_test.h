#include <stdio.h>
#include "colors.h"

int assert_equal_int(int expected, int result)
{
    if (expected == result)
    {
        printf(GREEN "[OK] expected:%d | result:%d\n" RESET, expected, result);
        return 1;
    }
    else
    {
        printf(RED "[NOK] expected:%d | result:%d\n" RESET, expected, result);
        return 0;
    }
}

int assert_not_equal_int(int expected, int result)
{
    if (expected != result)
    {
        printf(GREEN "[OK] expected:%d | result:%d\n" RESET, expected, result);
        return 0;
    }
    else
    {
        printf(RED "[NOK] expected:%d | result:%d\n" RESET, expected, result);
        return 1;
    }
}