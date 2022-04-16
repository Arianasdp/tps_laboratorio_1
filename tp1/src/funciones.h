#ifndef FUNCIONES_H_
#define FUNCIONES_H_



#endif /* FUNCIONES_H_ */

/** \brief men� que se abre presentando una variedad de opciones
 *
 * \return int retorna la opci�n seleccionada
 *
 */
int menu();

/** \brief permite al usuario ingresar los kilometros
 *
 * \param pFlag int* direcci�n de memoria de la bandera
 * \return int retorna una variable entera (los kilometros)
 *
 */
int totalKilometros(int* pFlag);

/** \brief permite al usuario ingresar el precio del vuelo
 *
 * \param pFlag int* direcci�n de memoria de la bandera
 * \return int retorna una variable entera (el precio del vuelo)
 *
 */
int precioVuelos(int* pFlag);

/** \brief calcula los costos de los vuelos seg�n sea por tarjeta de cr�dito, d�bito, etc
 *
 * \param km int kil�metros ingresados
 * \param vuelo int la variable del vuelo (ya sea latam o aerolineas) ingresado
 * \param debito float* la direci�n de memoria a la variable d�bito
 * \param credito float* la direci�n de memoria a la variable cr�dito
 * \param bitcoin float* la direci�n de memoria a la variable bitcoin
 * \param unitario float* la direci�n de memoria a la variable precio unitario
 * \return void
 *
 */
void calcularCostos(int km, int vuelo, float* debito, float* credito, float* bitcoin, float* unitario);

/** \brief calcula la diferencia de precios entre los vuelos
 *
 * \param vueloA int primer entero
 * \param vueloB int segundo entero
 * \param pDiferencia int* direcci�n de memmoria a la variable de diferencia de precios
 * \return void
 *
 */
void diferenciaDePrecios(int vueloA, int vueloB, int* pDiferencia);

/** \brief muestra los resultados por pantalla de los c�lculos de las funciones calcularCostos y diferenciaDePrecios
 *
 * \param debitoL float variable flotante que indica el precio de latam si se paga con d�bito
 * \param creditoL float variable flotante que indica el precio de latam si se paga con cr�dito
 * \param bitcoinL float variable flotante que indica cu�nto sale latam en bitcoins
 * \param unitarioL float variable flotante que indica el precio unitario de latam
 * \param debitoA float variable flotante que indica el precio de aerolineas si se paga con d�bito
 * \param creditoA float variable flotante que indica el precio de aerolineas si se paga con cr�dito
 * \param bitcoinA float variable flotante que indica cu�nto sale aerolineas en bitcoins
 * \param unitarioA float variable flotante que indica el precio unitario de aerolineas
 * \param diferencia int variable entera que indica la diferencia entre latam y aerolineas
 * \return void
 *
 */
void mostrarResultados(float debitoL, float creditoL, float bitcoinL, float unitarioL, float debitoA, float creditoA, float bitcoinA, float unitarioA, int diferencia);

/** \brief muestra los resultados por pantalla sin tener que ingresar datos, con datos ya cargados en la funci�n
 *
 * \return void
 *
 */
void cargaForzadaDeDatos();

/** \brief
 *
 * \param p char* direcci�n de memoria de la variable salida
 * \return void
 *
 */
void confirmarSalida(char* p);
