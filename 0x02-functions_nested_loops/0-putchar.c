#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char string[] = "_putchar";
int size = sizeof(string);
int  i  = 0;
while (i < size)
{
   _putchar(string[i]);
   i++;
}
return (0);
}
