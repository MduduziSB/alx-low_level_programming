#include <stdio.h>
/**
 * bmain - Exucutes before main
 * Return: nothing
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

