#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int)) {
    int temp;
    t_list *current;
    int swapped = 1;

    while (swapped) {
        swapped = 0;
        current = lst;
        while (current->next) {
            if (!cmp(current->data, current->next->data)) {
                temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1;
            }
            current = current->next;
        }
    }
    return lst;
}
