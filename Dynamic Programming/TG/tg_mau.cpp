#include <stdio.h>
int n, A[105][105];
int Max(int a, int b) { return a > b ? a : b; }
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                scanf("%d", &A[i][j]);
            A[i][0] = A[i][i + 1] = -1;
        }
        for (int i = 2; i <= n; i++)
            for (int j = 1; j <= i; j++)
                A[i][j] += Max(A[i - 1][j - 1], A[i - 1][j]);
        int p = A[n][1];
        for (int j = 2; j <= n; j++)
            if (p < A[n][j])
                p = A[n][j];
        printf("%d\n", p);
    }
}
