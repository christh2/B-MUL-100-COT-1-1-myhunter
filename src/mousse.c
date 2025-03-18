/*
** EPITECH PROJECT, 2022
** mousse
** File description:
** mousse
*/

#include "my.h"

gilles *get_mouse_pisitionby_click(sfMouseButtonEvent event, gilles *christ)
{
    if (event.x >= christ->x - 40 && event.x <= christ->x + 110
        && event.y >= christ->y - 40 && event.y <= christ->y + 110) {
        if (event.type == sfEvtMouseButtonPressed) {
            christ->x = 1; christ->y = rand() % (500);
            christ->music2 = sfMusic_createFromFile("SFB-fusil_1coup.ogg");
            sfMusic_play(christ->music2);
        }
    }
    return christ;
}
