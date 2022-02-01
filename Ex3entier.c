#include <stdio.h>
int main(void)
{
	char leBinaire;
	int leDecimal = 0;
	while (leBinaire != '\n')
	{
		scanf("%c",&leBinaire);
		if (leBinaire == '1')
			leDecimal = leDecimal * 2 + 1;
		else if (leBinaire == '0')
			leDecimal *= 2;
	}
	printf("%d\n", leDecimal);
	return 0;
}
