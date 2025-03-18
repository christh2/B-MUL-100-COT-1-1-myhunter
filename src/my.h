/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef _MY_H
    #define _MY_H
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Window/Event.h>
    #include <SFML/Window.h>
    #include <SFML/Audio/Music.h>
    #include <time.h>

typedef struct structure {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    sfTexture *texture2;
    sfSprite *sprite2;
    sfTexture *texture3;
    sfSprite *sprite3;
    sfVector2f scale;
    sfEvent event;
    sfVector2f pos_button;
    sfTexture *texture4;
    sfSprite *button;
    sfVector2f scale_button;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfIntRect rect;
    sfMusic *music;
    sfMusic *music2;
    int x; int y;
} gilles;

void move_rect(sfIntRect *rect, int offset, int max);
gilles *get_mouse_pisitionby_click(sfMouseButtonEvent event, gilles *christ);
gilles *fenetre(gilles *christ);
gilles *fenetre_call(gilles *christ);
gilles *while_1(gilles *christ);
gilles *les_if(gilles *christ);
#endif
