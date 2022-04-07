#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  char tipos[6][10] = {"Intel     ", "AMD       ", "Celeron  ", "Athlon    ", "Core      ", "Pentium   "};
struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

//FUNCION MOSTRAR DATOS

void mostrar(struct compu *p)
{
  for (int i = 0; i < 5; i++)
  {
      printf("PC N%d \n",i);
      printf("velocidad: %d\n",p->velocidad);
      printf("anio: %d \n",p->anio);
      printf("cantidad: %d \n",p->cantidad);
     
      
       for ( int j = 0; j < 10; j++)
       {
           printf(" %c",*(p->tipo_cpu+j));
       }
       printf("\n");
       
      p++;
  }
  
  
}

//FUNCION PC MAS VIEJA
void vieja(struct compu *p)
 {   
      struct compu *vieja;
      vieja=p;
      
    for (int i = 0; i < 5; i++)
    {  
        if ( p->anio < vieja->anio)
        {
            vieja=p;
        }
         p++;
    }
    printf("bieja: %d \n",vieja->anio);
    
}

//FUNCION PC MAS RAPIDA
void rapida(struct compu *p)
 {   
      struct compu *rapida;
      rapida=p;
      
    for (int i = 0; i < 5; i++)
    {  
        if ( p->velocidad > rapida->velocidad)
        {
            rapida=p;
        }
         p++;
    }
    printf("mas-rapida: %d \n",rapida->velocidad);
    
}


int main()
{

    srand((int)time(NULL));
    struct compu arreglo[5];
    struct compu *p;
    p = arreglo;
  
    int i;
    
    int m, n;
   int k;
    // cargar estructuras
    for (i = 0; i < 5; i++)
    {    k=rand()%6;
        p->velocidad = 1 + rand() % 3;
        p->anio = 2000 + rand() % 18;
        p->cantidad = 1 + rand() % 4;
        p->tipo_cpu = &tipos[k][0];
        p++;
    }
    p=arreglo;

    mostrar(p);
    p=arreglo;
    vieja(p);
    p=arreglo;
    rapida(p);
    return 0;
}
