#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"utils.h"
#include"sort.h"

int main(int argc, char *argv[])
{
    int h = 3, w = 5;
    int N = w*h;
    float *arr = (float *)malloc(N * sizeof(float));
	printf("before sort--------\n");
    UniformRNG(arr, N, 10.0f);
    PrintMatrix(arr, 1, N);

	BubbleSort(arr, N);
	printf("after sort---------\n");
	PrintMatrix(arr, 1, N);
    free(arr);
	return 0;
}
