/*
** EPITECH PROJECT, 2022
** rect
** File description:
** rect
*/

#include "my.h"

void move_rect(sfIntRect *rect, int offset, int max)
{
    if (rect->left == max - offset) {
        rect->left = 0;
    } else {
        rect->left = rect->left + offset;
    }
}
