// #include <stdlib.h>

int *ft_range(int start, int end) {
    int size = (end >= start) ? end - start + 1 : start - end + 1;
    int *range = (int *)malloc(size * sizeof(int));
    if (!range) return NULL;
    int i = 0;

    while (i < size) {
        range[i] = (end >= start) ? start + i : start - i;
        i++;
    }
    return range;
}
//  int main() {
// 	 int *range = ft_range(1, 3);
// 	 for (int i = 0; i < 3; i++) {
// 		 printf("%d\n", range[i]);
// 	 }
// 	 return 0;
//  }