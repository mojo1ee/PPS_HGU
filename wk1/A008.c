// https://www.acmicpc.net/problem/4344
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int c, n, score, total, count, len;
    int *arr;
    float avg;
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n);
        arr = (int *)malloc((n + 1) * sizeof(int));
        total = 0;
        count = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &score);
            arr[j] = score;
            total += score;
        }
        avg = (float)total / n;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] > avg)
                count++;
        }

        printf("%.3f%%\n", 100 * (float)count / n);
        free(arr);
    }
    return 0;
}