//Bottaro Juan Manuel
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int precio;
    float aumento;

    aplicarAumento(precio);
    printf("%f",precio);
}
int aplicarAumento(int precio)
{
    printf("ingrese el precio");
    scanf("%d",&precio);
    float aumento;
    aumento=precio+(precio/5)*100;
    return aumento;
}

typedef struct{
int id;
char nombre [20];
char tipo;
float efectividad;
}eVacuna;

void ordenarCreciente(eVacuna vacuna[], int tam)
{
    eVacuna aux;
    for(int i=0;i<tam;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if ((vacuna[i].tipo<vacuna[j].tipo) || (vacuna[i].tipo==vacuna[j].tipo && vacuna[i].efectividad<vacuna[j].efectividad))
            {
                aux=vacuna[i];
                vacuna[i]=vacuna[j];
                vacuna[j]=aux;
            }
        }
    }
}
int reemplazarCaracteres(char cadena[20],char a, char b)
{
    int contador;
    for(int i=0;i<20;i++)
    {
        if(cadena[i]==a)
        {
            cadena[i]=b;
            contador++;
        }
    }


}


