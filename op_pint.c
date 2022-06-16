#include "monty.h"

/**
 *op_pint -  prints the value at the top of the stack, followed by a new line
 *@stack: pointer to the head node pointer
 *@line_number: the line number
 *Return: void
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
(void)line_number;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

temp = *stack;
printf("%d\n", temp->n);
}
