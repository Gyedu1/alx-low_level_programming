#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function serves as the entry point for the program. It initializes
 * integer variable 'i' with value 0 and calls the 'positive_or_negative'
 * function with 'i' as an argument. The function 'positive_or_negative' checks
 * if the number is positive,negative or zero and displays appropriate message.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	int i;

	i = 0;

	positive_or_negative(i);
	return (0);
}

