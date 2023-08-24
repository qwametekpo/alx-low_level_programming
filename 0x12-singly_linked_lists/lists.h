#define LISTS_H
#ifndef LISTS_H
/**
* struct list_s - singly linkedd lists.
* @str: string - (malloc string).
* @len: length of string.
* @next: points to next node.
* Description: singly linked list node structure.
* Holberton project.
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);
ist_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
