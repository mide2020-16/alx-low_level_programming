#include "lists.h"
#include <stdio.h>


size_t print_list(const list_t *h)
{
  size_t node_count = 0;

  while (h != NULL)
  {
    printf("[%d] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
    h = h->next;
    node_count++;
  }
  return (node_count);
}