#include "main.h"

int main(void)
{
	char text[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}