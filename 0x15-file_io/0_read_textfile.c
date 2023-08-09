#include <stdio.h>
#include "main.h"
/**
 *read_textfile - a function that reads a text file
 *and prints it to the POSIX standard output
 *@filename: the file name
 *@letters: the number of letters
 *Return: the actual number of letters or 0 if fails
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;

  ssize_t _read, _write;

  if(!filename)
    {
      return (0);
    }
  /*open the file*/
  fd = open(filename, 0_RDONLY);
  if(fd == -1)
    {
      return (0);
    }
  buffer = malloc(sizeof(char) * letters);
  if(buffer == NULL)
    {
      return (0);
    }
  /*read the file*/
  _read = read(fd, buffer, letters);
  if(_read == -1)
    {
      free(buffer);
      close(fd);
      return (0);
    }

  /*write the file*/
  _write = write(STDOUT_FILENO, buffer, _read);
  if (_write == -1)
    {
      free(buffer);
      close(fd);
      return (0);
    }
  close(fd);
  return (_read);
}
