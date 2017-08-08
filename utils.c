#include<stdlib.h>
#include<stdio.h>

void UniformRNG(float *arr, int N, float d)
{
    float tmp;
	int i;
	static int setSeed = 0;
	if(!setSeed)
	{
		srand(time(0));
		setSeed = 1;
	}
    for(i = 0; i < N; i++)
    {
        tmp = 1.0f * rand() / RAND_MAX * 2;
        arr[i] = tmp * d - d;
    }
}


void PrintMatrix(float *arr, int h, int w)
{
    int i, j;
    for(i = 0; i < h; i++)
    {
        for(j = 0; j < w; j++)
        {
            printf("%f ", arr[i * w + j]);
        }
        printf("\n");
    }
}

