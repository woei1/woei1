#include <stdio.h>


int fibonacci(int n) 
{
    if (n <= 1) {
        return n;
    }
    int prev_fib = 0, fib = 1, next_fib;

    for(int i = 2; i <= n; i++) {
        next_fib = prev_fib + fib;

        prev_fib = fib;
        fib = next_fib;
    }

    return fib;
}
int main()
{
    int n, num = 0;

    while (1) {
        printf("알고 싶은 피보나치 수열의 항을 입력하세요 ");
        scanf("%d", &n);

        if (n <= 45)
            break;
    }

    num = fibonacci(n);

    printf("%d 번째 피보나치 수열의 항은 %d 입니다.\n", n, num);

    return 0;
}