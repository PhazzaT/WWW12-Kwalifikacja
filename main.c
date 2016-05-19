#include <stdlib.h>
#include <stdio.h>

int is_fizz(long number)
{
    return number % 3 == 0;
}

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
        if (is_fizz(i)) {
            printf("fizz");
        } else {
            printf("%ld", i);
        }

        putchar('\n');
    }

    return 0;
}
