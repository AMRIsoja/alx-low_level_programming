#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("%s\n", h->str);
        }
        h = h->next;
        count++;
    }

    return count;
}
}

