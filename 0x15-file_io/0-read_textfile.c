#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        errno = EINVAL;
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char *buffer = (char *) malloc(letters + 1);
    if (buffer == NULL) {
        fclose(file);
        errno = ENOMEM;
        return 0;
    }

    size_t read = fread(buffer, 1, letters, file);
    buffer[read] = '\0';

    if (ferror(file)) {
        free(buffer);
        fclose(file);
        errno = EIO;
        return 0;
    }

    fclose(file);

    if (write(STDOUT_FILENO, buffer, read) != read) {
        free(buffer);
        errno = EIO;
        return 0;
    }

    free(buffer);
    return read;
}
