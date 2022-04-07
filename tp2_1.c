#define N 20
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){ 
    /*
int i;
int vt[N];
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf(“%d ”, vt[i]);

*/
srand((int)time(NULL));
int a;
for (int i = 0; i < 5; i++)
{  a= rand() % 3;
  printf("%d-",a);
}





return 0;
}
