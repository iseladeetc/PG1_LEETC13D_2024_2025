#include "ball.h"

void ball_init (ball_t *ball, int x, int y, int radius, RGB color)
{
    ball->x = x;
    ball->y = y;
    ball->dy = radius/2;
    ball->dx = radius/2;
    ball->radius = radius;
    ball->color = color;
    ball->value = 13;
}

void ball_show (ball_t *b) 
{
    graph_circle(b->x, b->y, b->radius, b->color, true);
    //desenho/impressão do valor bola
    char txt[6];
    sprintf(txt, "%d", b->value);
    Size tsz = graph_text_size(txt, MEDIUM_FONT);
    int tx = b->x - tsz.width/2;
    int ty = b->y + tsz.height/2;
    graph_text(tx, ty, c_yellow, txt, MEDIUM_FONT);
}

void ball_hide (ball_t *b) 
{
    graph_circle(b->x, b->y, b->radius, c_white, true);
}

void ball_move(ball_t *b)
{
    b->x += b->dx;
    if ( (b->x + b->radius) >= WINDOW_WIDTH) {
        // bola tocou no limite direito
        b->x = WINDOW_WIDTH - b->radius;
        b->dx = -b->dx;
    }
    else if ((b->x - b->radius) <= 0 ) {
        b->x = b->radius;
        b->dx = -b->dx;
    }

    b->y += b->dy;
    if ( (b->y + b->radius) >= WINDOW_HEIGHT) {
        // bola tocou no limite inferior
        b->y = WINDOW_HEIGHT - b->radius;
        b->dy = -b->dy;
    }
    else if ((b->y - b->radius) <= 0 ) {
        b->y = b->radius;
        b->dy = -b->dy;
    }
}