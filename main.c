/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

int main(int argc, char **argv)
{
    if (argc > 2)
        return 84;
    create_engine();
    //destroy_engine();
    create_map();
    destroy_map();
    return 0;
}
