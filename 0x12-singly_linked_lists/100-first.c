#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - 1 prints sentence before main.
 * Execute function.
 */
void first(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}
