#include <stdio.h>

long long factorial(int num) 
{
    long long fact = 1;
    for (int i = 1; i <= num; i++) 
    {
        fact *= i;
    }
    return fact;
}

int main() 
{
    int n;

    printf("Введите n (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n должно быть больше 0.\n");
        return 1;
    }

    long long C[n];

    for (int i = 1; i <= n; i++) 
    {
        C[i - 1] = factorial(n) / (factorial(i) * factorial(n - i));
    }

    printf("Числа сочетаний из %d по i:\n", n);
    for (int i = 1; i <= n; i++) 
    {
        printf("C%d = %lld\n", i, C[i - 1]);
    }

    return 0;
}
