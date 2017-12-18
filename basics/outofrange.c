#include <stdlib.h>
#include <stdio.h>

#define OVERLOAD 25

int main() {

	// Allocate mem blocks and init variables
	char * c = malloc(1);
	char a[] = "Will I get overwritten?\0";
	int i = 11223344;
	int j = 44556677;
	char * x = malloc(64);

	// Fill content of mem `x` points at
	{
		char g[] = "This is my content";
		int len = sizeof(g)/sizeof(g[0]);
		char * p = x;
		for (int i = 0; i < len; i++)
			*p++ = g[i];
	}

	// Fill content of mem `c` points at
	{
		char * p = c;
		for (int i = 0; i < OVERLOAD; i++) *p++ = (char)(97 + i % 26);
		*p = '\0';
	}


	// Print values of variables (thus content of mem)
	printf("c = %s\nx = %s\na = %s\ni = %d\nj = %d\n", c, x, a, i, j);
	printf("ptr c = %p\nptr x = %p\n", (void *)c, (void *)x);

	free(c);
	free(x);
}
