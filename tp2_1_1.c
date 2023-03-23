// codigo a completar
#include<stdio.h>
#define N 20

int main(){

int i;
int rand();
double vt[N];
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf("%2.f ", vt[i]);
}

return 0;
}
