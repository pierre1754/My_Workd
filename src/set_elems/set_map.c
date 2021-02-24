/*
** EPITECH PROJECT, 2020
** set_map.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void set_map_3d(void)
{
    engine_t *engine = get_engine();
    engine->map->map_3d = malloc(sizeof(int *) * (engine->settings->max_x + 1));

    for (int i = 0; i < engine->settings->max_x; i++) {
        engine->map->map_3d[i] = malloc(sizeof(int) * (engine->settings->max_y + 1));
        for (int j = 0; j < engine->settings->max_x; j++)
            engine->map->map_3d[i][j] = 0;
        engine->map->map_3d[i][engine->settings->max_x] = '\0';
    }
    engine->map->map_3d[engine->settings->max_x] = NULL;
}

sfVector2f get_iso_point(int x, int y, int z)
{
    engine_t *engine = get_engine();
    sfVector2f point_2d = {0, 0};

    point_2d.x = (cos(ANGLE_X_RAD) * x - cos(ANGLE_X_RAD) * y) * engine->settings->zoom + engine->settings->max_x / 2;
    point_2d.y = (sin(ANGLE_Y_RAD) * y + sin(ANGLE_Y_RAD) * x - z) * engine->settings->zoom;
    return point_2d;
}

void set_map_2d(void)
{
    engine_t *engine = get_engine();
    engine->map->map_2d = malloc(sizeof(sfVector2f *) * (engine->settings->max_x + 1));

    for (int i = 0; i < engine->settings->max_x; i++) {
        engine->map->map_2d[i] = malloc(sizeof(sfVector2f) * (engine->settings->max_x + 1));
        for (int j = 0; j < engine->settings->max_y - 1; j++)
            engine->map->map_2d[i][j] = get_iso_point(i, j, engine->map->map_3d[i][j]);
    }
}
