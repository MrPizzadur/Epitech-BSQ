/*
** EPITECH PROJECT, 2020
** my_put_float
** File description:
** my_put_float
*/

#include "../../include/my.h"

int my_put_float(double nbr)
{
    int non_decimal = nbr;
    int decimal = (nbr * 100) - (non_decimal * 100);

    my_put_nbr(non_decimal);
    my_putchar('.');
    if (decimal == 0)
        my_putstr("00");
    else if (decimal < 10)
        if (decimal < 0)
            my_put_nbr(decimal * -1);
        else
            my_put_nbr(decimal * 10);
    else
        my_put_nbr(decimal);
    return 0;
}