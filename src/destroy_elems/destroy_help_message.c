/*
** EPITECH PROJECT, 2020
** my_world.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void destroy_help_message(void)
{
    engine_t *engine = get_engine();

    sfText_destroy(engine->message->message);
    free(engine->message);
}
