#include <unistd.h>

void rostring(char *str) {
    int i = 0;
    int start = 0;
    int end = 0;
    int first_word_start = 0;
    int first_word_end = 0;
    int first_word_found = 0;
    int first_word_printed = 0;

    // Find the first word
    while (str[i]) {
        if (!first_word_found && str[i] != ' ' && str[i] != '\t') {
            first_word_start = i;
            while (str[i] && str[i] != ' ' && str[i] != '\t') {
                i++;
            }
            first_word_end = i;
            first_word_found = 1;
        }
        i++;
    }

    // Print the rest of the words
    i = first_word_end;
    while (str[i]) {
        if (str[i] != ' ' && str[i] != '\t') {
            start = i;
            while (str[i] && str[i] != ' ' && str[i] != '\t') {
                i++;
            }
            end = i;
            if (first_word_printed) {
                write(1, " ", 1);
            }
            write(1, &str[start], end - start);
            first_word_printed = 1;
        } else {
            i++;
        }
    }

    // Print the first word
    if (first_word_found) {
        if (first_word_printed) {
            write(1, " ", 1);
        }
        write(1, &str[first_word_start], first_word_end - first_word_start);
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc >= 2) {
        rostring(argv[1]);
    } else {
        write(1, "\n", 1);
    }
    return 0;
}
