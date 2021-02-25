/*
** EPITECH PROJECT, 2020
** set_map.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void init_map_3d(void)
{
    engine_t *engine = get_engine();

    for (int i = 0; i < GET_SET_MX(engine); i++) {
        for (int j = 0; j < GET_SET_MX(engine); j++)
            GET_MAP_3D(engine)[i][j] = 0;
        GET_MAP_3D(engine)[i][GET_SET_MY(engine)] = '\0';
    }
    GET_MAP_3D(engine)[GET_SET_MX(engine)] = NULL;
}

void init_map_2d(void)
{
    engine_t *engine = get_engine();

    for (int i = 0; i < GET_SET_MX(engine); i++) {
        for (int j = 0; j < GET_SET_MY(engine) - 1; j++)
            GET_MAP_2D(engine)[i][j] = get_iso_point(i, j,
            GET_MAP_3D(engine)[i][j]);
    }
}

void init_map_ver(void)
{
    engine_t *engine = get_engine();

    for (int i = 0; i < GET_SET_MX(engine) - 1; i++) {
        for (int j = 0; j < GET_SET_MY(engine) - 1; j++)
            GET_MAP_VER(engine)[i][j] = create_vertex_quad(
            &GET_MAP_2D(engine)[i][j], &GET_MAP_2D(engine)[i][j + 1],
            &GET_MAP_2D(engine)[i + 1][j + 1], &GET_MAP_2D(engine)[i + 1][j]);
    }
}
