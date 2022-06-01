#include <stdio.h>

int main() {

    int *ptr;
    char c;
    int i;
    float f;
    double d;
    _Bool b = 0;


    
    printf("pointer: value-%p bytes-%lu\n", &ptr, sizeof(ptr));
    printf("char: value-%c bytes-%lu\n", c, sizeof(c));
    printf("int: value-%d bytes-%lu\n", i, sizeof(i));
    printf("float: value-%1.3f bytes-%lu\n", f, sizeof(f));
    printf("double: value-%f bytes-%lu\n", d, sizeof(d));
    printf("_Bool: value-%d bytes-%lu\n", b, sizeof(b));



    return 0;
}