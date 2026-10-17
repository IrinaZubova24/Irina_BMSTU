#include <stdio.h>
#include <stdbool.h>

double sr(int n);  // объявление функции (прототип или заголовок)

// отрицательное число - окончание ввода последовательности max_num
int main()
{
    int n;
    int max_num;
    bool has_max = false;
    bool is_first_number = true;

    do {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        else
        {
            // Если число является полным квадратом
                // то начинаем
                // Поиск максимума
                if (is_first_number) {
                    max_num = n;
                    has_max = true;
                    is_first_number = false;
                }
                if (n > max_num)
                {
                    max_num = n;
                }
        }
    } while (n >= 0);
    if (has_max)
        printf("%d\n", max_num);
    return 0;
}

// Среднее арифметическое цифр числа
double sr(int n) {
    int digit, sum = 0, count = 0;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        count += 1;
        n /= 10;
    }
    double sr_ar = (double)sum / n;
    return sr_ar;
}



