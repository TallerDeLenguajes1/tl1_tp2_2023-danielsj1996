#include <stdio.h>
#include <stdlib.h>

int main()
{

#define N 5
#define M 7
    int i, j, rand();
    int mt[N][M];

    int *puntero;
    puntero = &mt[0][0];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mt[i][j] = 1 + rand() % 100;
            printf("| %2d |", *puntero);
          puntero++;
        }
        printf("\n");
    }
    return 0;
}
