#include <stdio.h>

enum Colors { RED, GREEN, BLUE, YELLOW };

int main() {
    enum Colors color = GREEN;
    switch (color) {
        case RED: printf("Hex: #FF0000\n"); break;
        case GREEN: printf("Hex: #00FF00\n"); break;
        case BLUE: printf("Hex: #0000FF\n"); break;
        case YELLOW: printf("Hex: #FFFF00\n"); break;
    }
    return 0;
}