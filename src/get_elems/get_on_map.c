/*
** EPITECH PROJECT, 2020
** get_on_map.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void get_on_map(void)
{
    engine_t *engine = get_engine();
    sfVector2i mouse = sfMouse_getPositionRenderWindow(GET_WINDOW(engine));

    for (int i = 0; i < GET_SET_MX(engine); i++)
        for (int j = 0; j < GET_SET_MY(engine); j++)
            if ((mouse.x >= (int)GET_MAP_2D(engine)[i][j].x - 25 && mouse.x <= (int)GET_MAP_2D(engine)[i][j].x + 25) && (mouse.y >= (int)GET_MAP_2D(engine)[i][j].y - 25 && mouse.y <= (int)GET_MAP_2D(engine)[i][j].y + 25)) {
                GET_MAP_3D(engine)[i][j] += 1;
                init_map_2d();
                clear_map_ver();
                init_map_ver();
            }
}

void get_mouse_input(void)
{
    engine_t *engine = get_engine();
    sfVector2i mouse = sfMouse_getPositionRenderWindow(GET_WINDOW(engine));

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        get_on_map();
        //get_selection();
    }
}

void get_selection(void)
{
    engine_t *engine = get_engine();
    sfVector2i mouse = sfMouse_getPositionRenderWindow(GET_WINDOW(engine));

    for (int i = 0; i < GET_SET_MX(engine) - 1; i++)
        for (int j = 0; j < GET_SET_MY(engine) - 1; j++)
            printf("%f\n", sfVertexArray_getBounds(GET_MAP_VER(engine)[i][j]).height);
}
