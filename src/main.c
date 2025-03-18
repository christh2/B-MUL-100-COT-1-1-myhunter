/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** hunter
*/

#include "my.h"

gilles *fenetre(gilles *christ)
{
    sfVideoMode mode = {1920, 1080, 32};
    christ->window = sfRenderWindow_create(mode,
    "my_hunter", sfDefaultStyle | sfResize, NULL);
    christ->texture = sfTexture_createFromFile("bay.jpg", NULL);
    christ->sprite = sfSprite_create();
    christ->texture2 = sfTexture_createFromFile("0111.png", NULL);
    christ->sprite2 = sfSprite_create(); christ->x = 1; christ->y;
    christ->clock; christ->time; christ->seconds = 0.2;
    christ->clock = sfClock_create();
    christ->rect.top = 0; christ->rect.left = 0;
    christ->rect.width = 110; christ->rect.height = 110;
    sfVector2f scale = {1, 1}; sfSprite_setScale(christ->sprite2, scale);
    christ->music = sfMusic_createFromFile("musichunter.ogg");
    sfMusic_play(christ->music); return christ;
}

gilles *fenetre_call(gilles *christ)
{
    sfRenderWindow_clear(christ->window, sfBlack);
    sfSprite_setTexture(christ->sprite, christ->texture, sfTrue);
    sfSprite_setTexture(christ->sprite2, christ->texture2, sfTrue);
    sfSprite_setTextureRect(christ->sprite2, christ->rect);
    sfRenderWindow_drawSprite(christ->window, christ->sprite, NULL);
    sfRenderWindow_drawSprite(christ->window, christ->sprite2, NULL);
    sfRenderWindow_display(christ->window);
    return christ;
}

gilles *while_1(gilles *christ)
{
    while (sfRenderWindow_pollEvent(christ->window,
        &(christ->event))) {
        if (christ->event.type == sfEvtClosed)
            sfRenderWindow_close(christ->window);
        if (christ->event.type == sfEvtKeyPressed &&
            christ->event.key.code == sfKeyEscape)
            sfRenderWindow_close(christ->window);
        get_mouse_pisitionby_click(christ->event.mouseButton,
        christ);
    }
}

gilles *les_if(gilles *christ)
{
    sfSprite_destroy(christ->sprite);
    sfSprite_destroy(christ->sprite2);
    sfMusic_destroy(christ->music);
    sfTexture_destroy(christ->texture);
    sfTexture_destroy(christ->texture2);
    sfSprite_destroy(christ->button);
    sfTexture_destroy(christ->texture4);
    sfRenderWindow_destroy(christ->window);
    free(christ); return christ;
}

int main(void)
{
    gilles *christ; christ = malloc(sizeof(gilles));
    christ = fenetre(christ); sfEvent event;
    while (sfRenderWindow_isOpen(christ->window)) {
        christ->time = sfClock_getElapsedTime(christ->clock);
        christ->seconds = christ->time.microseconds / 10000.0;
        if (christ->seconds > 0.2) {
            sfVector2f my_position = {christ->x++, christ->y};
            sfSprite_setPosition(christ->sprite2, my_position);
            if (christ->x > 1920) {
                christ->x = 1; christ->y = rand() % (500);
            }
            move_rect(&(christ->rect), 110, 330);
            sfClock_restart(christ->clock);
        }
        while_1(christ);
        christ = fenetre_call(christ);
    } les_if(christ); return 0;
}
