#include <pg/pglib.h>
#include "ball.h"

#define WINDOW_WIDTH  600
#define WINDOW_HEIGHT 400

#define BALLS_NUMBER 10

ball_t b1[BALLS_NUMBER];

void mouse_handler (MouseEvent me)
{
    if (me.type == MOUSE_BUTTON_EVENT && me.button ==  BUTTON_LEFT && 
        me.state == BUTTON_PRESSED) {
        for (int i = 0; i < BALLS_NUMBER; i++) {
            ball_show(&b1[i]);
        } 
    }

}

void handle_timer()
{
    ball_hide(&b1[0]);
    ball_move(&b1[0]);
    ball_show(&b1[0]);

}


int main() 
{
     // initializes the graphics, specifying dimensions and a     
    // title for the graphic window. Must be called first. 
    graph_init2("Hello World", WINDOW_WIDTH, WINDOW_HEIGHT);
    

    int x = 20;
    int y = 20;
    int radius = 20;
    for (int i = 0; i < BALLS_NUMBER; i++) {
        ball_init(&b1[i], x, y, radius, c_blue);
        x = x + 2*radius+10;
    }

    graph_regist_mouse_handler(mouse_handler);
    graph_regist_timer_handler(handle_timer, 1000);

    // start the event loop 
    graph_start();
	
    printf("That's all folks!\n");
    return 0;
}
