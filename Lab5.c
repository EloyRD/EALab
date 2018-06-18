#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define POPSIZE 10
#define ROLL 10
#define SEED 1234

int main() {
	int weight[POPSIZE];
	int index;
	int index1;
	int weightSum;
	float selecProb[POPSIZE];
	float accSelecProb[POPSIZE];

	int maxWeightPos;
	double roll[ROLL];
	int chosen[ROLL];

	//srand(time(NULL));
	srand(SEED);

	for (index = 0; index < POPSIZE; index++) {
		weight[index] = index + 1;
	}

	printf("This is the weight probabilities list: \n");

	for (index = 0; index < POPSIZE; index++) {
		printf("%d ", weight[index]);
	}
	printf("\n");
	printf("\n");

	weightSum = 0;

	for (index = 0; index < POPSIZE; index++) {
		weightSum = weightSum + weight[index];
	}
	printf("This is the sumation of weights: \n");
	printf("%d ", weightSum);
	printf("\n");
	printf("\n");

	for (index = 0; index < POPSIZE; index++) {
		selecProb[index] = (float)weight[index] / weightSum;
	}

	printf("This is the selection probabilities list: \n");
	for (index = 0; index < POPSIZE; index++) {
		printf("%.4lf ", selecProb[index]);
	}

	printf("\n");
	printf("\n");

	accSelecProb[0] = selecProb[0];

	for (index = 1; index < POPSIZE; index++) {
		accSelecProb[index] = accSelecProb[index - 1] + selecProb[index];
	}

	printf("This is the accumulated selection probabilities list: \n");
	for (index = 0; index < POPSIZE; index++) {
		printf("%.4lf ", accSelecProb[index]);
	}

	printf("\n");
	printf("\n");

	for (index = 0; index < ROLL; index++) {
		roll[index] = (double)rand() / (double)RAND_MAX;
	}

	printf("Rolling the wheel!!: \n");
	for (index = 0; index < ROLL; index++) {
		printf("%.4lf ", roll[index]);
	}

	printf("\n");
	printf("\n");

	for (index = 0; index < ROLL; index++) {
		chosen[index]=weight[0];
		for (index1 = 0; index1 < POPSIZE; index1++) {
			if (roll[index] > accSelecProb[index1]) {
				chosen[index] = weight[index1];
			}
		}
	}

	printf("The list of picked weights: \n");
	for (index = 0; index < ROLL; index++) {
		printf("%d ", chosen[index]);
	}

	printf("\n");
	printf("\n");


	/*

	int pos;
	int startpos;
	int minpos;
	int min;

	pos = 0;

	min = weight[0];

		for (startpos = 0; startpos <= 4; startpos++) {
			minpos = startpos;
			min = weight[startpos];

			for (pos = startpos + 1; pos < 6; pos++) {
				if (weight[pos] < min) {
					min = weight[pos];
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
	*/

	return 0;
}