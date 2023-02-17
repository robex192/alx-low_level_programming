#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
 printf("Size of a char: %c byte(c)",sizeof(char));
 printf("size of an int:%d byte(s)",sizeof(int));
 printf("size of a long int: %ld byte(s)",sizeof(int));
 printf("size of a long long int:%li byte(s)",sizeof(int));
 printf("size of a float: %f byte(s)",sizeof(float));
 return(0);
}
