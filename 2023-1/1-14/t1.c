// 猜凶手

#include <stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			break;
		}
	}
	printf("%c\n", killer);
	return 0;
}