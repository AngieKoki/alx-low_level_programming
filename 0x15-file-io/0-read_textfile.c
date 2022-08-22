#include "main.h"

/**
 * read_textfile - read a text file and print to STDOUT
 * @filename: pointer to the filename
 * @letters: num of letters func should read and print
 * Return: actual num of letters it can read and print
 * else if file cannot be openned, 0
 * if filename = NULL, 0
 * if write fails, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int r;
	ssize_t frd, fwr;
	char *out;

	if (!filename)
		return (0);

	r = open(filename, O_RDONLY);

	if (r == -1)
		return (0);

	out = malloc(sizeof(char) * (letters));

	if (!out)
		return (0);

	frd = read(r, out, letters);

	if (frd == -1)
		return (0);

	fwr = write(STDOUT_FILENO, out, frd);

	free(out);
	close(r);

	return (fwr);
}
