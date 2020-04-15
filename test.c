#include "test.h"

static int total = 0;

void init(void)
{
	total = 0;
}

void add(int x)
{
	total += x;
}

int get(void)
{
	return total;
}