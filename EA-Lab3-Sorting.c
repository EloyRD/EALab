#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int item[6];
	int pos;
	int min;
	int minpos;
	int currentsearch;

	item[0] = 7;
	item[1] = 6;
	item[2] = 3;
	item[3] = 5;
	item[4] = 4;
	item[5] = 8;

	pos = 0;
	currentsearch = 0;
	
	printf("Unsorted list: \n");

	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");

	pos = 0;
	minpos = 0;
	min = item[0];
	
	while (currentsearch < 6)	{
		pos = currentsearch;
		minpos = currentsearch;
		min = item[currentsearch];
		
		while (pos < 6) {
			if (item[pos] < min) {
				min = item[pos];
				minpos = pos;
			}
			pos = pos + 1;
		}

		item[minpos] = item[currentsearch];
		item[currentsearch] = min;

		printf("Partially sorted list: \n");

		pos = 0;
		while (pos < 6) {
			printf("%d ", item[pos]);

			pos = pos + 1;
		}

		printf("\n");

		currentsearch = currentsearch + 1;
	}

	pos = 0;

	printf("Fully sorted list: \n");

	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");

	return 0;
}
