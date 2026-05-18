#include<stdio.h>
float CalcularPromedio (float *v,int tamanio);
int main ()
{
    float v[5]={6,7,7.5,6.5,8};
    int tamanio=5;

    for (int i = 0; i < tamanio; i++)
    {
       printf("%.2f ", v[i]);
    }
    CalcularPromedio(v,tamanio);
    
}

float CalcularPromedio (float *v,int tamanio)
{
  float suma,promedio; 
  for (int i = 0; i < tamanio; i++)
    {
       suma=suma+v[i];
    }
  promedio = suma/tamanio;
  
  return promedio;
}