#include <stdio.h>

int main() {

    // if - else if - else
    if (1 == 1) {
        printf("if statement\n");
    } else if (1 != 1) {
        printf("else if statement\n");
    } else {
        printf("else statement\n");
    }

    switch(0)
    {
    case 0:
        printf("true\n");
        break;

    case 1:
        printf("false\n");
        break;

    default:
        printf("default\n");
        break;
    }

    return 0;
}