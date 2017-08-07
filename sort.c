#include "sort.h"

void BubbleSort(float *arr, int len)
{
    int i, j;
    float tmp;
    for(i = len - 1; i > 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}




