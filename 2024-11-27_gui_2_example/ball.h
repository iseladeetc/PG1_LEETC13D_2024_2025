#include <pg/pglib.h>

 

typedef struct 
{
    int x;
    int y;
    int radius;
    int dy;
    RGB color;
    int value;
} ball_t;

void ball_init (ball_t *ball, int x, int y, int radius, RGB color);
void ball_show (ball_t *b);
void ball_hide (ball_t *b);
void ball_move(ball_t *b);