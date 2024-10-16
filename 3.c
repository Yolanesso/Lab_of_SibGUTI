#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 20;
    float arr[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++) 
    {
        arr[i] = (float)rand() / RAND_MAX * 10;
    }

    printf("Массив случайных вещественных чисел:\n");
    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        printf("%.2f ", arr[i]);
    }

    printf("\n");

    printf("Элементы, большие своих соседей справа и слева:\n");
    printf("\n");

    for (int i = 1; i < n - 1; i++) 
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) 
        {
            printf("%.2f (arr[%d])\n", arr[i], i);
        }
    }

    return 0;
}
