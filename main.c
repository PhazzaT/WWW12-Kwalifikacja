#include <stdlib.h>
#include <stdio.h>

void usage(const char * progname)
{
    printf("Usage: %s <number>\n", progname);
    exit(1);
}

int main(int argc, char ** argv)
{
    if (argc != 2)
        usage(argv[0]);

    long number = atoi(argv[1]);

    for (long i = 1; i <= number; i++) {
        printf("%ld\n", i);
    }

    return 0;
}
