#include <stdio.h>

// Функция для проверки, является ли символ цифрой
int is_digit(char ch) 
{
    return (ch >= '0' && ch <= '9');
}

// Функция для вычисления длины строки
int str_length(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}

// Функция для проверки валидности номера карты по алгоритму Луна
int luhn_check(const char *card_number) 
{
    int sum = 0, is_second = 0;

    for (int i = str_length(card_number) - 1; i >= 0; i--) 
    {
        if (is_digit(card_number[i])) 
        { 
            int digit = card_number[i] - '0';

            if (is_second) 
            {
                digit *= 2;
                if (digit > 9) 
                {
                    digit -= 9;
                }
            }

            sum += digit;
            is_second = !is_second;
        }
    }

    return (sum % 10 == 0);
}

int main() 
{
    char card_number[25];

    printf("Введите номер банковской карты: ");
    fgets(card_number, sizeof(card_number), stdin);  

    if (luhn_check(card_number)) 
    {
        printf("Номер карты валидный.\n");
    } else {
        printf("Номер карты невалидный.\n");
    }

    return 0;
}

//Валид - 4276 4400 1336 1511
//Невалид - 1234 5678 9012 3456