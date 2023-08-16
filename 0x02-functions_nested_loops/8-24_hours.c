#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints minutes of the day from 00:00 - 23:59
 */

void jack_bauer(void)
{
	int hr1 = 0;
	int hr2 = 0;
	int sec1 = 0;
	int sec2 = 0;

	for (hr1; hr1 < 3; hr1++)
	{
		for (hr2; hr2 <= 9; hr2++)
		{
			if (hr1 == 2 && hr2 == 4)
			{
				break;
			}
			for (sec1; sec1 < 6; sec1++)
			{
				for (sec2; sec2 <= 9; sec2)
				{
					printf("%d%d:%d%d\n", hr1, hr2, sec1, sec2);
				}
			}
		}
	}
}
