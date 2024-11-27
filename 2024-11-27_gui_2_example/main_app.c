#include <pg/pglib.h>
#include "ball.h"

#define WINDOW_WIDTH  400
#define WINDOW_HEIGHT 200

void mouse_handler (MouseEvent me)
{

}

void handle_timer()
{

}

int main() {
     // initializes the graphics, specifying dimensions and a     
    // title for the graphic window. Must be called first. 
    graph_init2("Hello World", WINDOW_WIDTH, WINDOW_HEIGHT);
    

    graph_regist_mouse_handler(mouse_handler);
    graph_regist_timer_handler(handle_timer, 100);

    // start the event loop 
    graph_start();
	
    printf("That's all folks!\n");
    return 0;
}
