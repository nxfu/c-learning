#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

int main(void) {

    TrafficLight light = GREEN;

    switch (light) {
        case RED:
            printf("Stop!\n");
            break;

        case YELLOW:
            printf("Wait...\n");
            break;

        case GREEN:
            printf("Go!\n");
            break;

        default:
            printf("Unknown signal.\n");
            break;
    }

    return 0;
}
