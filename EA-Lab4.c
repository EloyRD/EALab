#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int item[6];
	int pos;
	int min;
	int minpos;
	int currentsearch;
	int startpos;

	item[0] = 7;
	item[1] = 6;
	item[2] = 3;
	item[3] = 5;
	item[4] = 8;
	item[5] = 4;

	pos = 0;

	printf("Unsorted list: \n");

	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");

	/* Looking for 0th position */
	min = item[0];
	minpos = 0;
	pos = 0;

	while (pos < 6) {
		if (item[pos] < min) {
			min = item[pos];
			minpos = pos;
		}
		pos++;
	}

	item[minpos] = item[0];
	item[0] = min;

	printf("Partially sorted list: \n");

	pos = 0;
	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");

	/* Looking for 1st position	*/
	min = item[1];
	minpos = 1;
	pos = 1;

	while (pos < 6) {
		if (item[pos] < min) {
			min = item[pos];
			minpos = pos;
		}
		pos = pos + 1;
	}

	item[minpos] = item[1];
	item[1] = min;

	printf("Partially sorted list: \n");

	pos = 0;
	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");


	/* Looking for 2nd position	*/
	min = item[2];
	minpos = 2;
	pos = 2;

	while (pos < 6) {
		if (item[pos] < min) {
			min = item[pos];
			minpos = pos;
		}
		pos = pos + 1;
	}

	item[minpos] = item[2];
	item[2] = min;

	printf("Partially sorted list: \n");

	pos = 0;
	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");


	/* Looking for 3rd position	*/
	min = item[3];
	minpos = 3;
	pos = 3;

	while (pos < 6) {
		if (item[pos] < min) {
			min = item[pos];
			minpos = pos;
		}
		pos = pos + 1;
	}

	item[minpos] = item[3];
	item[3] = min;

	printf("Partially sorted list: \n");

	pos = 0;
	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");


	/* Looking for 4th position	*/
	min = item[4];
	minpos = 4;
	pos = 4;

	while (pos < 6) {
		if (item[pos] < min) {
			min = item[pos];
			minpos = pos;
		}
		pos = pos + 1;
	}

	item[minpos] = item[4];
	item[4] = min;

	printf("Partially sorted list: \n");

	pos = 0;
	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");


	/* Looking for 2nd position	*/
	min = item[5];
	minpos = 5;
	pos = 5;

	while (pos < 6) {
		if (item[pos] < min) {
			min = item[pos];
			minpos = pos;
		}
		pos = pos + 1;
	}

	item[minpos] = item[5];
	item[5] = min;

	printf("Partially sorted list: \n");

	pos = 0;
	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");


	/* Looking for 6th position	*/
	min = item[6];
	minpos = 6;
	pos = 6;

	while (pos < 6) {
		if (item[pos] < min) {
			min = item[pos];
			minpos = pos;
		}
		pos = pos + 1;
	}

	item[minpos] = item[6];
	item[6] = min;

	printf("Partially sorted list: \n");

	pos = 0;
	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");

	printf("\n");

	printf("\n");

	item[0] = 7;
	item[1] = 6;
	item[2] = 3;
	item[3] = 5;
	item[4] = 8;
	item[5] = 4;

	pos = 0;

	printf("Unsorted list: \n");

	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");




	/* Loop */

	currentsearch = 0;
	pos = 0;
	minpos = 0;
	min = item[0];

	while (currentsearch < 6) {
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

	printf("\n");

	printf("\n");

	printf("\n");

	item[0] = 7;
	item[1] = 6;
	item[2] = 3;
	item[3] = 5;
	item[4] = 8;
	item[5] = 4;

	pos = 0;

	printf("Unsorted list: \n");

	while (pos < 6) {
		printf("%d ", item[pos]);

		pos = pos + 1;
	}

	printf("\n");

	for (startpos = 0; startpos <= 4; startpos++) {
		minpos = startpos;
		min = item[startpos];

		for (pos = startpos+1; pos < 6; pos++) {
			if (item[pos] < min) {
				min = item[pos];
				minpos = pos;
			}
		}

		item[minpos] = item[startpos];
		item[startpos] = min;

		if (startpos != 4) {
			printf("Partially sorted list: \n");
		}
		
		if (startpos == 4) {
			printf("Fully sorted list: \n");
		}


		for (pos = 0; pos < 6; pos++) {
			printf("%d ", item[pos]);
		}

		printf("\n");

	}

	return 0;
}
