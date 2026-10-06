#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 2;
    }

    int fd = open(argv[1], O_RDONLY);

    if (fd == -1) {
        fprintf(stderr, "open: %s\n", strerror(errno));
        return 1;
    }

    char buffer[4096];
    long long total = 0;

    while (1) {
        ssize_t n = read(fd, buffer, sizeof buffer);

        if (n > 0) {
            total += n;
        } else if (n == 0) {
            break;
        } else {
            fprintf(stderr, "read: %s\n", strerror(errno));
            close(fd);
            return 1;
        }
    }

    if (close(fd) == -1) {
        fprintf(stderr, "close: %s\n", strerror(errno));
        return 1;
    }

    printf("%lld\n", total);
    return 0;
}