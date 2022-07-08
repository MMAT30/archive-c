#include <stdio.h>

int main() {

    // vars
    int x = 0;
    int y = 0;

    // for loop
    for (int x = 0; x <= 2; x++) {
        printf("for loop\n");
    }

    // while loop
    while (x <= 2) {
        printf("while loop\n");
        x++;
    }

    // do while loop
    do 
    {
        printf("do while loop\n");
        y++;
    } while(y <= 2);


    return 0;
}