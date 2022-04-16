#ifndef FUNCIONES_H_
#define FUNCIONES_H_



#endif /* FUNCIONES_H_ */

/** \brief menú que se abre presentando una variedad de opciones
 *
 * \return int retorna la opción seleccionada
 *
 */
int menu();

/** \brief permite al usuario ingresar los kilometros
 *
 * \param pFlag int* dirección de memoria de la bandera
 * \return int retorna una variable entera (los kilometros)
 *
 */
int totalKilometros(int* pFlag);

/** \brief permite al usuario ingresar el precio del vuelo
 *
 * \param pFlag int* dirección de memoria de la bandera
 * \return int retorna una variable entera (el precio del vuelo)
 *
 */
int precioVuelos(int* pFlag);

/** \brief calcula los costos de los vuelos según sea por tarjeta de crédito, débito, etc
 *
 * \param km int kilómetros ingresados
 * \param vuelo int la variable del vuelo (ya sea latam o aerolineas) ingresado
 * \param debito float* la direción de memoria a la variable débito
 * \param credito float* la direción de memoria a la variable crédito
 * \param bitcoin float* la direción de memoria a la variable bitcoin
 * \param unitario float* la direción de memoria a la variable precio unitario
 * \return void
 *
 */
void calcularCostos(int km, int vuelo, float* debito, float* credito, float* bitcoin, float* unitario);

/** \brief calcula la diferencia de precios entre los vuelos
 *
 * \param vueloA int primer entero
 * \param vueloB int segundo entero
 * \param pDiferencia int* dirección de memmoria a la variable de diferencia de precios
 * \return void
 *
 */
void diferenciaDePrecios(int vueloA, int vueloB, int* pDiferencia);

/** \brief muestra los resultados por pantalla de los cálculos de las funciones calcularCostos y diferenciaDePrecios
 *
 * \param debitoL float variable flotante que indica el precio de latam si se paga con débito
 * \param creditoL float variable flotante que indica el precio de latam si se paga con crédito
 * \param bitcoinL float variable flotante que indica cuánto sale latam en bitcoins
 * \param unitarioL float variable flotante que indica el precio unitario de latam
 * \param debitoA float variable flotante que indica el precio de aerolineas si se paga con débito
 * \param creditoA float variable flotante que indica el precio de aerolineas si se paga con crédito
 * \param bitcoinA float variable flotante que indica cuánto sale aerolineas en bitcoins
 * \param unitarioA float variable flotante que indica el precio unitario de aerolineas
 * \param diferencia int variable entera que indica la diferencia entre latam y aerolineas
 * \return void
 *
 */
void mostrarResultados(float debitoL, float creditoL, float bitcoinL, float unitarioL, float debitoA, float creditoA, float bitcoinA, float unitarioA, int diferencia);

/** \brief muestra los resultados por pantalla sin tener que ingresar datos, con datos ya cargados en la función
 *
 * \return void
 *
 */
void cargaForzadaDeDatos();

/** \brief
 *
 * \param p char* dirección de memoria de la variable salida
 * \return void
 *
 */
void confirmarSalida(char* p);
