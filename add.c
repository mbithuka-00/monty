#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
    stack_t *m;
    int len = 0, aux;

    m = *head;
    while (m)
    {
        m = m->next;
        len++;
    }
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    m = *head;
    aux = m->n + m->next->n;
    m->next->n = aux;
    *head = m->next;
    free(m);
}

