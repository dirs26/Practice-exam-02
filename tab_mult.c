#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
    if (argc != 2) {
        printf("\n");
        return 0;
    }
    int num = atoi(argv[1]);
    for (int i = 1; i <= 9; i++)
        printf("%d x %d = %d\n", i, num, i * num);
    return 0;
}