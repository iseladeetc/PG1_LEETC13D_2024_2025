#include "ball.h"

void ball_init (ball_t *ball, int x, int y, int radius, RGB color)
{
    ball->x = x;
    ball->y = y;
    ball->dy = radius/2;
    ball->radius = radius;
    ball->color = color;
    ball->value = 13;
}

void ball_show (ball_t *b) 
{
    graph_circle(b->x, b->y, b->radius, b->color, true);
    //desenho/impressão do valor bola
}

void ball_hide (ball_t *b) 
{
    graph_circle(b->x, b->y, b->radius, c_white, true);
}

void ball_move(ball_t *b)
{
    b->y += b->dy;
}