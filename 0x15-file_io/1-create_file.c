#include "main.h"

/**
 * crearte_file - Creates a new file and writes the specified content to it.
 *
 * @param filename - A pointer to the name of the file to be created.
 * @param text_content - A pointer to the content string to be written.
 *
 * @return If the operation fails, returns -1. Otherwise, returns 1.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, w, len = 0;

    // Check if the filename pointer is valid.
    if (filename == NULL)
        return (-1);

    // Calculate the length of the text content if provided.
    if (text_content != NULL)
    {
        for (len = 0; text_content[len];)
            len++;
    }

    // Open the file with specific permissions and modes.
    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

    // Write the text content to the file.
    w = write(fd, text_content, len);

    // Check for errors during file creation or writing.
    if (fd == -1 || w == -1)
        return (-1);

    // Close the file descriptor.
    close(fd);

    // Return 1 to indicate successful file creation and writing.
    return (1);
}
