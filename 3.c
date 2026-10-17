#include <stdio.h>

// Функция, которая возвращает true, если число x является полным квадратом
// иначе возвращает false
bool is_full_square(int x) 
{
    for (int n = 1; n <= 10; n += 1)
    {
        if (x == n * n) 
        {
            printf("x является квадратом числа n: %d\n", n);
            return true;
        }
        
    }
    return false; 
}



int main()
{
    int x;
    if (scanf("%d", &x)!=1)
    {
        printf("IO")
    }
    

    if (is_full_square(x)) {
        printf("yes\n");

    }

    return 0;
}
