#include "main.h"
/**
 * swap_int - check code
 * @a: an input integer pointer
 * @b: an input interger pointer
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
