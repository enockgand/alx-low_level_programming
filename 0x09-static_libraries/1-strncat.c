#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *srrncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
