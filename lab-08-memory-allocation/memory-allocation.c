#include <ctype.h>
#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <memory_in_MB>\n", argv[0]);
        return 1;
    }

    for (const char *p = argv[1]; *p; ++p) {
        if (!isdigit((unsigned char)*p)) {
            fprintf(stderr, "Please enter a positive whole number of MB.\n");
            return 1;
        }
    }
    char *end;
    errno = 0;
    unsigned long long mb = strtoull(argv[1], &end, 10);
    const size_t bytes_per_mb = 1024u * 1024u;
    if (errno || end == argv[1] || *end || mb == 0 ||
        mb > SIZE_MAX / bytes_per_mb) {
        fprintf(stderr, "Please enter a positive memory size that fits this system.\n");
        return 1;
    }

    size_t size = (size_t)mb * bytes_per_mb;
    volatile unsigned char *ptr = malloc(size);
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Touch every byte so the allocation is reflected in resident memory.
    for (size_t i = 0; i < size; ++i) ptr[i] = 0;

    printf("%llu MB memory allocated successfully (1 MB = 1024 x 1024 bytes).\n", mb);
    printf("Press Enter to release memory...");
    fflush(stdout);
    getchar();
    free((void *)ptr);
    printf("Memory released successfully.\n");
    return 0;
}
