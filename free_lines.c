#include "monty.h"

/**
 * free_lines - frees a line_t list
 * @lines: hpointer
 */
void free_lines(line_t *lines)
{
int i = 0;

while ((lines + i)->content != NULL)
{
free((lines + i)->content);
i++;
}
free(lines);
}

