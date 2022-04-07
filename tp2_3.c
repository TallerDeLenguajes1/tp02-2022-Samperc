#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7



  /*
    int mt[N][M];
    …
    for(i = 0;i<N; i++)
    {
    for(j = 0;j<M; j++)
    {
    mt[i][j]=1+rand()%100;
    printf(“%lf ”, mt[i][j]);
    }
    printf(“\n”);
    }
    */
int main()
{

    int i, j;
    int *p;int B[M][N];
    p=&B[0][0];
  srand((int)time(NULL));
    for (i = 0; i < M; i++)

    {
        for ( j = 0; j < N; j++)
        {
            
            *(p+i*N+j)=1+rand()%100;
            printf("[%d][%d]=  %d \n",i,j,*(p+i*N+j));
            
        }
        
    }

    return 0;
}
