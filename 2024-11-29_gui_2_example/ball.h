#include <pg/pglib.h>

#define WINDOW_WIDTH  600
#define WINDOW_HEIGHT 400

typedef struct 
{
    int x;
    int y;
    int radius;
    int dy;
    int dx;
    RGB color;
    int value;
} ball_t;

void ball_init (ball_t *ball, int x, int y, int radius, RGB color);
void ball_show (ball_t *ball);
void ball_hide (ball_t *ball);
void ball_move (ball_t *ball);