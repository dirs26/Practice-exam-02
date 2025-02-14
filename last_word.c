#include <unistd.h>

void last_word(char *str) {
    int i = 0;
    int start = 0;
    int end = 0;

    while (str[i]) {
        if (str[i] != ' ' && str[i] != '\t' && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')) {
            start = i;
        }
        if (str[i] != ' ' && str[i] != '\t' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')) {
            end = i;
        }
        i++;
    }

    if (start <= end) {
        while (start <= end) {
            write(1, &str[start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc == 2) {
        last_word(argv[1]);
    } else {
        write(1, "\n", 1);
    }
    return 0;
}
