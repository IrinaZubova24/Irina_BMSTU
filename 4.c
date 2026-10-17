#include <stdio.h>
#include <stdbool.h>

// Функция, которая возвращает true, если число x является полным квадратом
// иначе возвращает false


int main()
{
    int x;
    bool is_fl = false;
    scanf("%d", &x);
    
    for (int n = 1; n <= 10; n += 1)
    {
        if (x == n * n) 
        {
            printf("x является квадратом числа n: %d\n", n);
            is_fl = true;
        }
    }
    if (is_fl)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n"); 
    }
    return 0;
}