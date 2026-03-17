#include <unistd.h>

int main() {
    char *msg = "Hello, World!\n";
    write(1, msg, 13); // 1 is the file descriptor for standard output
    return 0;
}

