#include "monty.h"
/**
 *op_pall - prints the data of all nodes in a stack
 *@stack: pointer to the head node
 *@line_number: the line number
 *Return: void
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
(void)line_number;
temp = *stack;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
