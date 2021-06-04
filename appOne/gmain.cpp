#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;
    let length = 0;
    while (notQuit) {
        if (area < 2500) {
            if (isTrigger(KEY_D)) {
                ++area;
            }
        }
        if (area > 0) {
            if (isTrigger(KEY_A)) {
                --area;
            }
        }
        if (area <= 2475) {
            if (isPress(KEY_W)) {
                area += 10;
            }
        }
        if (area >= 25) {
            if (isPress(KEY_S)) {
                area += -10;
            }
        }
        length = sqrt(area);
        if (isTrigger(KEY_SPACE)) {
            area = 4;
        }
    
        

        clear(224, 225, 204);
        mathAxis(51);

        fill(31, 30, 51, 120);
        strokeWeight(0.2);
        mathRect(0, 0, length, -length);

        textSize(50);
        text("ñ êœ = " + area, 0, 60);
        text("Å„" + area + " = " + length, 0, 120);
    }
}