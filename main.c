#include <stdio.h>

int main(int argc, char *argv[])
{
    float f = -12.456f;
    unsigned char *up;
    up = &f;
    printf("%x%x%x%x\n", up[0], up[1], up[2], up[3]);
	return 0;
}
