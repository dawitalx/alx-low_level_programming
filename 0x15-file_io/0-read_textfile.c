#include "main.h"

/**
 * read_textfile - read the text file and print out
 * @filename: the name of file i am reading
 * @letters: the number of letters it should read
 * @Return: return the actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total_bytes_read = 0;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	int fd = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}

	if (fd == -1)
	{
		return (0);
	}

	while (letters > 0)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read == -1)
		{
			close(fd);
			return (0);
		}

		if (bytes_read == 0)
		{
			break;
		}

		if ((size_t)bytes_read > letters)
		{
			bytes_read = letters;
		}

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}

		total_bytes_read += bytes_read;
		letters -= bytes_read;
	}

	close(fd);
	return (total_bytes_read);
}
