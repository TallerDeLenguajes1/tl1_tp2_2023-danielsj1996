// codigo a completar
#include <stdio.h>
#define N 20

int main()
{

    int i;
    int rand();
    double vt[N];
    double *p;
    for (i = 0; i < N; i++)
    {
        *p = 1 + rand() % 100;
        printf("%.2f ", *p);
    }

    return 0;
}
