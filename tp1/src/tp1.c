/*
 ============================================================================
 Name        : tp1.c
 Author      : De Palma, Ariana
 Description : trabajo práctico n° 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"

int main(void) {
		setbuf(stdout, NULL);

		int km;

	    int latam;
	    int aerolineas;

	    float debitoLatam;
	    float debitoAerolineas;
	    float creditoLatam;
	    float creditoAerolineas;
	    float bitcoinLatam;
	    float bitcoinAerolineas;
	    float precioUnitarioLatam;
	    float precioUnitarioAerolineas;
	    int diferencia;

	    int flagKm = 0;
	    int flagVuelos = 0;
	    int flagCostosCalculados = 0;

	    char salir = 'n';

	    do
	    {
	        switch(menu())
	        {
	            case 1:
	            	km = totalKilometros(&flagKm);
	                break;
	            case 2:
	                if(flagKm)
	                {
	                	printf("Ingrese precio de vuelos:\n");
	                	system("pause");
	                    printf("Precio vuelo Latam: ");
	                    latam = precioVuelos(&flagVuelos);
	                	printf("Precio vuelo Aerolineas: ");
	                    aerolineas = precioVuelos(&flagVuelos);

	                }
	                else
	                {
	                    printf("Ingrese la cantidad de kilometros primero\n");
	                }
	                break;
	            case 3:
	                if(flagVuelos)
	                {
	                    calcularCostos(km, latam, &debitoLatam, &creditoLatam, &bitcoinLatam, &precioUnitarioLatam);
	                    calcularCostos(km, aerolineas, &debitoAerolineas, &creditoAerolineas, &bitcoinAerolineas, &precioUnitarioAerolineas);
	                    diferenciaDePrecios(latam, aerolineas, &diferencia);
	                    flagCostosCalculados = 1;
	                }
	                else
	                {
	                    printf("Ingrese el costo de los vuelos primero\n");
	                }
	                break;
	            case 4:
	                if(flagCostosCalculados)
	                {
	                    mostrarResultados(debitoLatam, creditoLatam, bitcoinLatam, precioUnitarioLatam, debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioUnitarioAerolineas, diferencia);
	                    flagKm = 0;
	                    flagVuelos = 0;
	                    flagCostosCalculados = 0;
	                }
	                else
	                {
	                    printf("No se pueden mostrar los resultados si los costos no han sido calculados\n");
	                }
	                break;
	            case 5:
	                cargaForzadaDeDatos();
	                break;
	            case 6:
	                confirmarSalida(&salir);
	                break;
	        default:
	            printf("Opcion invalida\n\n");
	        }

	        system("pause");

	    }while(salir != 's');

	return EXIT_SUCCESS;
}
