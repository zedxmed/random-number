#include "tinymt32.h"
// And if you can't link:
#include "tinymt32.c"

#include <time.h>
#include <stdio.h>

int main(int argc, const char* argv[])
{
    tinymt32_t state;
    uint32_t seed = time(0);

    tinymt32_init(&state, seed);

    for (int i=0; i<10; i++)
            printf("random number %d: %u\n", i, (unsigned int)tinymt32_generate_uint32(&state));
}
