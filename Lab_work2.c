#include <stdio.h>

int count(int n, int d)  
{
    if (d <= 0) return 0;
    if (n % d == 0)  
    {
        int c = count(n, d-1);
        return 1 + c;
    }
    return count(n, d-1);
}
int del(int n)  
{
    if (n <= 1) return 0;
    int d = n - 1;
    return count(n, d);
}
void perebor(int x, int M, int K)  
{
    if (x > M) return;
    int c = del(x);
    if(c == K)  
    {
        printf("%i ", x);
    }
    perebor(x + 1, M, K);
}
int main()  
{
    int N;
    int M;
    int K;
    printf("N = ");
    scanf("%i", &N);
    printf("M = ");
    scanf("%i", &M);
    printf("K = ");
    scanf("%i", &K);
    if (N <= 0 || M <= 0 || K <= 0)
    {
        printf("Вводимые числа не натуральные\n");
        return 1;
    }
    if (N > M)
    {
        printf("N не должен быть больше M\n");
    }
    perebor(N, M, K);
    printf("\n");
    return 0;  
}
