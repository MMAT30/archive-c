#include <stdio.h>

int main(int argc, char const *argv[])
{
    // argument count
    printf("argc: %d\n", argc);


    if (argc > 1) {
        for (int x = 0; x < argc; x++) {
            printf("argv[%d]: %s\n", x, argv[x]);
        }
    } else {
        printf("pass arguments to program\n");
    }



    return 0;
}
