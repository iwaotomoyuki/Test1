#include "test.h"

void main(void)
{
	int i = 0;
	int total = 0;
	
	init();
	for(i = 0; i < 100; i++) {
		add(i);
	}
	total = get();
	
	return;
}