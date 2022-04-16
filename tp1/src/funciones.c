#include <stdio.h>
#include"funciones.h"

int menu()
{
    int opcion;

    //system("cls");
    printf("  *** Menu de opciones ***\n\n");
    printf("1- Ingresar kilometros\n");
    printf("2- Ingresar precio de vuelos\n");
    printf("3- Calcular todos los costos\n");
    printf("4- Informar resultados\n");
    printf("5- Carga forzada de datos\n");
    printf("6- Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    //system("cls");

    return opcion;
}

int totalKilometros(int* pFlag)
{
    int km;

    printf("Ingrese kilometros: ");
    scanf("%d", &km);
    while(km <= 0)
    {
        printf("Error, ingrese una cantidad de kilometros valida: \n");
        scanf("%d", &km);
    }

    *pFlag = 1;

    return km;

}

int precioVuelos(int* pFlag)
{
     int vuelo;

     scanf("%d", &vuelo);

    while(vuelo <= 0)
    {
        printf("Error, ingrese un precio valido: \n");
        scanf("%d", &vuelo);
    }

    *pFlag = 1;

    return vuelo;

}

void calcularCostos(int km, int vuelo, float* pDebito, float* pCredito, float* pBitcoin, float* pUnitario)
{
    *pDebito = vuelo * 0.9;
    *pCredito = vuelo * 1.25;
    *pBitcoin = vuelo / 4566725.94;
    *pUnitario = vuelo / km;
}

void diferenciaDePrecios(int vueloA, int vueloB, int* pDiferencia)
{
    *pDiferencia = vueloA - vueloB;
}

void mostrarResultados(float debitoL, float creditoL, float bitcoinL, float unitarioL, float debitoA, float creditoA, float bitcoinA, float unitarioA, int diferencia)
{
    printf("Latam: \n\n");
    printf("a. Precio con tarjeta de debito: %.2f\n", debitoL);
    printf("b. Precio con tarjeta de credito: %.2f\n", creditoL);
    printf("c. Precio pagando con bitcoin: %f\n", bitcoinL);
    printf("d. Precio unitario: %.2f\n\n", unitarioL);
    printf("Aerolineas: \n\n");
    printf("a. Precio con tarjeta de debito: %.2f\n", debitoA);
    printf("b. Precio con tarjeta de credito: %.2f\n", creditoA);
    printf("c. Precio pagando con bitcoin: %f\n", bitcoinA);
    printf("d. Precio unitario: %.2f\n\n", unitarioA);
    printf("La diferencia de precio es: %d\n", diferencia);
}


void cargaForzadaDeDatos()
{
    int km = 7090;
    int aerolineas = 162965;
    int latam = 159339;
    float debitoLatam;
    float debitoAerolineas;
    float creditoLatam;
    float creditoAerolineas;
    float bitcoinLatam;
    float bitcoinAerolineas;
    float precioUnitarioLatam;
    float precioUnitarioAerolineas;
    int diferencia;

    calcularCostos(km, latam, &debitoLatam, &creditoLatam, &bitcoinLatam, &precioUnitarioLatam);
    calcularCostos(km, aerolineas, &debitoAerolineas, &creditoAerolineas, &bitcoinAerolineas, &precioUnitarioAerolineas);
    diferenciaDePrecios(latam, aerolineas, &diferencia);

    mostrarResultados(debitoLatam, creditoLatam, bitcoinLatam, precioUnitarioLatam, debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioUnitarioAerolineas, diferencia);
}

void confirmarSalida(char* p)
{
    char confirma;

    printf("Confirma salida? s/n: ");
    fflush(stdin);
    scanf("%c", &confirma);

    *p = confirma;
}

