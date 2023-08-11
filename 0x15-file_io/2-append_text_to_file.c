#include "main.h"

/**
 * append_text_to_file - Appends the provided text to the end of a specified file.
 * @filename: A pointer to the name of the target file.
 * @text_content: The text to be added at the end of the file.
 *
 * Return: Returns -1 if the function encounters an error or if the filename is NULL.
 *         Returns -1 if the file does not exist or the user lacks write permissions.
 *         Returns 1 upon successful appending of the text to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor, write_result, content_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (content_length = 0; text_content[content_length];)
            content_length++;
    }

    file_descriptor = open(filename, O_WRONLY | O_APPEND);
    write_result = write(file_descriptor, text_content, content_length);

    if (file_descriptor == -1 || write_result == -1)
        return (-1);

    close(file_descriptor);

    return (1);
}
