/*
** EPITECH PROJECT, 2020
** draw_all.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void draw_all(void)
{
    engine_t *engine = get_engine();

    sfRenderWindow_clear(GET_WINDOW(engine), sfBlack);
    draw_2d_map();
	sfRenderWindow_display(GET_WINDOW(engine));
}
