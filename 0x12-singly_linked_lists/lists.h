#ifndef LISTS_H
#define LISTS_H


/**
 * struct list_s -singly linked list 
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: ppoints the the next node
 * 
 * Description: singly linked listnode structure
 * 
*/

typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
} list_t;

#endif /*LISTS_H*/