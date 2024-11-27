#include <pg/pglib.h>

#define WINDOW_WIDTH  400
#define WINDOW_HEIGHT 200

void mouse_handler (MouseEvent me)
{

    printf("Mouse event: ");
    if (me.type == MOUSE_MOTION_EVENT) printf("[Motion] ");
    else if (me.type == MOUSE_BUTTON_EVENT) printf("[Button]");
    printf("(%d, %d)\n", me.x, me.y);
}

void handle_timer()
{
    printf("Timer!\n");
}

int main() {
     // initializes the graphics, specifying dimensions and a     
    // title for the graphic window. Must be called first. 
    graph_init2("Hello World", WINDOW_WIDTH, WINDOW_HEIGHT);
    
    graph_rect(50, 50, 150, 100, c_orange, true);
    graph_rect(50, 50, 150, 100, c_black, false);

    graph_circle(WINDOW_WIDTH/2, WINDOW_HEIGHT/2, 25, c_blue, true);

    graph_text2(50, 100, c_green, c_black, "ola", LARGE_FONT);

    graph_regist_mouse_handler(mouse_handler);
    graph_regist_timer_handler(handle_timer, 1000);

    // start the event loop 
    graph_start();
	
    printf("That's all folks!\n");
    return 0;
}
