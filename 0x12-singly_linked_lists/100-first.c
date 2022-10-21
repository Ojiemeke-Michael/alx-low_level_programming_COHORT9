#include "lists.h"
#include <stdio.h>

/**
 * before_main - prints strings befor main is executed.
 *
 * Return: void.
 */
void __attribute__((constructor))before_main()
{
	printf("You are beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
