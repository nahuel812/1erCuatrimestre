/**
 * \brief Carga un vector de enteros
 * \param Vector a cargar
 * \param Tamaño del vector
 *
 */
void cargaSecuencial(int vec[], int tam);


/**
 * \brief Muestra valores dentro del vector
 * \param Vector a mostrar
 * \param Tamaño del vector
 *
 */
void mostrarvector(int vec[], int tam);


/**
 * \brief Busca el numero maximo en el vector
 * \param Vector a buscar
 * \param Tamaño del vector
 * \return El numero maximo encontrado
 *
 */
int buscarMaximo(int vec[], int tam);


/**
 * \brief Busca el numero mínimo en el vector
 * \param Vector a buscar
 * \param Tamaño del vector
 * \return El numero mínimo encontrado
 *
 */
 int buscarMinimo(int vec[], int tam);


/**
 * \brief Busca el numero solicitado en el vector
 * \param Vector a buscar
 * \param Tamaño del vector
 * \param Numero a buscar
 * \return -1 o la posicion encontrada
 *
 */
int buscarValor(int vec[], int tam, int indice);


/** \brief Ordena el vector recibido como parametro
 *
 * \param numeros[] int Vector a ordenar
 * \param tam int El tamaño del vector a ordenar
 * \return void No retorna ningun valor
 *
 */
void ordenarVector(int numeros[], int tam);
