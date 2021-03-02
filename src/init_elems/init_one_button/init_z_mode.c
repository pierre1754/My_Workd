/*
** EPITECH PROJECT, 2020
** set_map.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void init_plus_zoom(buttons_t *button)
{
    engine_t *engine = get_engine();
    sfVector2f rect_size = {0};

    sfRectangleShape_setSize(button->rectangle, (sfVector2f){150, 75});
    rect_size = sfRectangleShape_getSize(button->rectangle);
    button->str_text = my_strdup("Increase Zoom");
    sfText_setString(button->text, button->str_text);
    button->pos = (sfVector2f){
        GET_WINDOW_SIZE(engine).x - rect_size.x - MARGE,
        MARGE
    };
    sfRectangleShape_setPosition(button->rectangle, button->pos);
}

void init_minus_zoom(buttons_t *button)
{
    engine_t *engine = get_engine();
    sfVector2f rect_size = {0};

    sfRectangleShape_setSize(button->rectangle, (sfVector2f){150, 75});
    rect_size = sfRectangleShape_getSize(button->rectangle);
    button->str_text = my_strdup("Decrease Zoom");
    sfText_setString(button->text, button->str_text);
    button->pos = (sfVector2f){
        GET_WINDOW_SIZE(engine).x - rect_size.x - MARGE,
        rect_size.y + MARGE * 2
    };
    sfRectangleShape_setPosition(button->rectangle, button->pos);
}

void init_cart_mode(buttons_t *button)
{
    engine_t *engine = get_engine();
    sfVector2f rect_size = {0};

    sfRectangleShape_setSize(button->rectangle, (sfVector2f){150, 75});
    rect_size = sfRectangleShape_getSize(button->rectangle);
    button->str_text = my_strdup("Map Mode");
    sfText_setString(button->text, button->str_text);
    button->pos = (sfVector2f){
        GET_WINDOW_SIZE(engine).x - rect_size.x - MARGE,
        GET_WINDOW_SIZE(engine).y - rect_size.y - MARGE
    };
    sfRectangleShape_setPosition(button->rectangle, button->pos);
}

void init_color_mode(buttons_t *button)
{
    engine_t *engine = get_engine();
    sfVector2f rect_size = {0};

    sfRectangleShape_setSize(button->rectangle, (sfVector2f){150, 75});
    rect_size = sfRectangleShape_getSize(button->rectangle);
    button->str_text = my_strdup("Color Mode");
    sfText_setString(button->text, button->str_text);
    button->pos = (sfVector2f){
        GET_WINDOW_SIZE(engine).x - rect_size.x * 2 - MARGE * 2,
        GET_WINDOW_SIZE(engine).y - rect_size.y - MARGE
    };
    sfRectangleShape_setPosition(button->rectangle, button->pos);
}

void init_new_map(buttons_t *button)
{
    engine_t *engine = get_engine();
    sfVector2f rect_size = {0};

    sfRectangleShape_setSize(button->rectangle, (sfVector2f){150, 75});
    rect_size = sfRectangleShape_getSize(button->rectangle);
    button->str_text = my_strdup("Color Mode");
    sfText_setString(button->text, button->str_text);
    button->pos = (sfVector2f){
        MARGE,
        MARGE
    };
    sfRectangleShape_setPosition(button->rectangle, button->pos);
}