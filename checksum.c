#include "checksum.h"

int checksum(char *message)
{
	int c = 0;
	while (*message)
	{
		// Exclusive or
		c += c ^ (int)(*message);
		message++;
	}

	return c;
}