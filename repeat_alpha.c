// #include <unistd.h>

void repeat_alpha(char *str) {
    int i = 0;
    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z')) {
            for (int j = 0; j < str[i] - 'a' + 1; j++)
                write(1, &str[i], 1);
        } else if ((str[i] >= 'A' && str[i] <= 'Z')) {
            for (int j = 0; j < str[i] - 'A' + 1; j++)
                write(1, &str[i], 1);
        } else {
            write(1, &str[i], 1);
        }
        i++;
    }
}

// int main(int argc, char **argv) {
//     if (argc == 2) {
//         repeat_alpha(argv[1]);
//     }
//     write(1, "\n", 1);
//     return 0;
// }
