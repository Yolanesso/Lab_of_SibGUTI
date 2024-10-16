#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int arr[20];
    srand(time(NULL));

    for (int i = 0; i < 20; i++) 
    {
        arr[i] = (rand() % 21) - 10; 
    }

    printf("Массив случайных чисел:\n");
    for (int i = 0; i < 20; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("______________________________________________________\n");
    printf("Положительный числа: \n");

    for (size_t i = 0; i <= 20; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d\n", arr[i]);
        }
        
    }

    printf("Отрицательные числа: \n");
    printf("______________________________________________________\n");
    
    for (size_t i = 0; i < 20; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d\n", arr[i]);
        }
        
    }

    return 0;
}
