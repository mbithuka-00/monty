#include "monty.h"
/**
 * f_pall - it prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *m;
    (void) counter;

    m = *head;
    if (m == NULL)
        return;
    while (m)
    {
        printf("%d\n", m->n);
        m = m->next;
    }
}

