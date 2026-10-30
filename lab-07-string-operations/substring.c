#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int read_number(const char *prompt, long *value) {
    char input[64], *end;
    printf("%s", prompt);
    if (!fgets(input, sizeof input, stdin)) return 0;
    if (!strchr(input, '\n') && !feof(stdin)) return 0;
    errno = 0;
    *value = strtol(input, &end, 10);
    if (end == input || errno != 0) return 0;
    while (isspace((unsigned char)*end)) end++;
    return *end == '\0';
}

int main(void) {
    char str[1024];
    long start, len;

    printf("Enter a string: ");
    if (!fgets(str, sizeof str, stdin)) return 1;
    if (!strchr(str, '\n') && !feof(stdin)) {
        fprintf(stderr, "Error: input string is too long (maximum 1022 bytes).\n");
        return 1;
    }
    str[strcspn(str, "\n")] = '\0';
    size_t length = strlen(str);

    if (!read_number("Enter starting position (1-based): ", &start) ||
        !read_number("Enter substring length: ", &len) ||
        start < 1 || (size_t)start > length + 1 || len < 0) {
        fprintf(stderr, "Error: use a start from 1 to string length + 1 and a nonnegative length.\n");
        return 1;
    }

    size_t offset = (size_t)start - 1;
    size_t count = (size_t)len;
    if (count > length - offset) count = length - offset;
    printf("Substring: ");
    fwrite(str + offset, 1, count, stdout);
    printf("\nString length: %zu\n", length);
    return 0;
}
