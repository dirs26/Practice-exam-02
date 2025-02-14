// #include <stdlib.h>

int *ft_rrange(int start, int end) {
    int size = (end >= start) ? end - start + 1 : start - end + 1;
    int *range = (int *)malloc(size * sizeof(int));
    if (!range) return NULL;
    int i = 0;

    while (i < size) {
        range[i] = (end >= start) ? end - i : end + i;
        i++;
    }
    return range;
}