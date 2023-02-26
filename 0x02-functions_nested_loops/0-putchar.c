#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
   char string[] = {'_', 'p', 'u', 'c', 'h', 'a', 'r', '\n'};
   
   int i;
   for(i = 0; string[i] != '\n'; i++)
   {
	   _putchar(string[i]);
   }
   return (0);
}
