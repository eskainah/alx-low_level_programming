#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    // If text_content is NULL, we will write an empty file
    if (text_content == NULL) {
        text_content = "";
    }

    int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        return -1;
    }

    size_t content_length = strlen(text_content);
    ssize_t written = write(fd, text_content, content_length);
    if (written != content_length) {
        close(fd);
        return -1;
    }

    close(fd);
    return 1;
}
