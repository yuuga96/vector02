#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        float vx = -3;
        clear(200);
        mathAxis(9.1f);
        strokeWeight(10);
        mathArrow(0, 0, vx, 0);
    }
}
