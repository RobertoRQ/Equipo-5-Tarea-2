
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 1000

//declaracion de funciones
void NEstadosYsimbolos();
void verificacionDeCadenas();
void EliminarDatos();
//declaracion de variables globales

int estados, NSimbolos, simbolos[MAX], EFinales, EF[MAX], T[MAX][MAX];

int main()
{

    int n, opcion;

    do
    {
        printf("\n\tMen%c",163);
        printf( "\n   1. Crear Aut%cmata",162);
        printf( "\n   2. Verificar cadena" );
        printf( "\n   3. Salir" );
        printf( "\n\n   Introduzca opci%cn (1-3): ",162);

        scanf( "%d", &opcion );

        switch ( opcion )
        {
            case 1:
            		EliminarDatos();
            		NEstadosYsimbolos();

                    break;
            case 2:
              		verificacionDeCadenas();
                    break;
         }

    } while ( opcion != 3 );

    return 0;
}

void NEstadosYsimbolos(){
	int i,j;

	printf("\n Ingrese el n%cmero de los estados: ",163);
	scanf("%i",&estados);
	printf("\n Ingrese el n%cmero de los simbolos: ",163);
	scanf("%i",&NSimbolos);

	printf(" Ingrese los s%cmbolos\n",161);
	//Se pide el numero de los simbolos donde estos estan ubicados

	for (i = 0; i <NSimbolos; i++)
	{
		printf("\n\t S%cmbolo[%d]: ",161,i+1);
		scanf("%ls",&simbolos[i]);
	}

	//solicitar la cantidad de finales
	printf("\n\n %cCu%cntos estados finales hay? : ",168,160);
	scanf("%i",&EFinales);
	printf("\n Ingrese los estados que son finales: ");
	int acum = 0;
	for (i = 0; i < EFinales; i++)
	{
		printf("\n\tEstado final Q: ");
		scanf("%i",&acum);
		EF[acum] = 1; //se iguala a 1 ya es de aceptación
	}
	 //Se crea la matriz de transicion
	printf("\n Transiciones:");
	printf("\n En caso de no de no requerir n%cmero ingrese el simbolo :  -  \n",163);

	char guion[MAX]; //variable para poder aguardar los guiones o cualquier otro simbolo que se quiera usar
	int k;
	for (i = 0; i < estados; i++)
	{
		for (j = 0; j < NSimbolos ; j++)
		{
			printf("\n\tQ%d -> %c = ",i,simbolos[j]);
			scanf("%s",&guion[i]);
			k = (int)(guion[i]); // se convierte el caracter en una variable tipo Int
			T[i][simbolos[j]] = k-48;//el numero 48 es el numero de 0 en codigo ASCII

		}
	}
}

void verificacionDeCadenas(){
	char cadena[MAX];
	printf("\n Ingrese la cadena a comprobar: ");
	scanf("%s",cadena);
	printf("\n");
	int a = 0;
	int limite = strlen(cadena);

		for (int i = 0; i < limite; i++){

			int elemento = (int)(cadena[i]);
			if(a == -3){
                break;
			}
			a = T[a][elemento];
			//Estas funciones muestran el recorrido
			//printf("Simbolo = %c \n",cadena[i]);
			//printf("Q = %d \n",a );
		}
	//se evalua el estado de recorrdio
	printf("\n La cadena ingresada es: " );
		if (EF[a] == 1){
			printf("Aceptada\n");
		}
		else{
			printf("Rechazada\n");

		}

		// Se elimina la variable cadena para volverla a usar
		for( int i=0; i<sizeof(cadena); i++ ){
            cadena[i]='\0';
		}
}

void EliminarDatos(){
	estados = 0;
	NSimbolos = 0;
	EFinales = 0;
		for (int i = 0; i < MAX; i++)
		{
			simbolos[i] = 0;
			EF[i] = 0;
			for (int j = 0; j < MAX; j++)
			{
				T[i][j] = 0;

			}
		}

}
