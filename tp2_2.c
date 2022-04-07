
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20


int main(){ 
int i;
int vt[N];
srand((int)time(NULL));
int *p;
p=vt;

for(i = 0;i<N; i++)
{
*p=1+rand()%10;
printf(" %d ," , *p);
p++;

}
return 0;
}