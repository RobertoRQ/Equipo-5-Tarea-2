#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo_s
{
 char dato;
 struct nodo_s *siguiente;
} nodo_t;

typedef nodo_t *ptrNodo;
typedef nodo_t *ptrPila;

void push(ptrPila *pila, char x)
{
 
 ptrNodo nodo;
 nodo = (ptrNodo)malloc(sizeof(nodo_t));
 if (nodo != NULL)
    {
     nodo->dato = x;
     nodo->siguiente = *pila;
     *pila=nodo;
    }
}

char pop(ptrPila *pila)
{
 
 ptrNodo nodo;
 char x;

 
 nodo = *pila;
 x = (*pila)->dato;
 *pila = (*pila)->siguiente;
 free(nodo);
 return x;
}

int pila_vacia(ptrPila *pila)
{
 return (*pila == NULL ? 1:0);
}


void nodos_pila(ptrNodo nodo)
{
 if (nodo == NULL)
     printf("La pila está vacia\n");
 else
     {
      while (nodo != NULL)
            {
             printf("%c\n",nodo->dato);
             nodo = nodo->siguiente;
            }
      printf("\n");
     }
}

int verifica_balance(char expresion[], char cabre, char ccierra);

int EsOperador(char expresion[],char operadora);


int main()
{
 char cadena[]="#include<stdio.h>\nint main(\n{\nint x=5+3;\nif(x >= 0)\n{\nprintf(“El número es positivo”);\n}\nreturn 0;\n}";
 int i=0;

 printf("El codigo a analizar es el siguiente:\n\n");
 while (cadena[i] != '\0')
       {
        printf("%c", cadena[i]);
        i++;
       }

 printf("\n\n");
 if (verifica_balance(cadena, '(', ')') == 1)
     printf("Analisis de parentesis(): [OK]\n");
 else
     printf("Analisis de parentesis(): [Error]\n");
     

 if (verifica_balance(cadena, '[', ']') == 1)
     printf("Analisis de corchetes[]: [OK]\n");
 else
     printf("Analisis de corchetes[]: [Error]\n");
 
 if (verifica_balance(cadena, '{', '}') == 1)
     printf("Analisis de llaves{}: [OK]\n");
 else
     printf("Analisis de llaves{}: [Error]\n");
     
if (EsOperador(cadena,'+' )== 2)
   printf("es operador");
else
     printf("");

 return 0;
}

int verifica_balance(char expresion[], char cabre, char ccierra)
{
 int x=0, balanceados=1;
 ptrPila pila = NULL;


 while (expresion[x] != '\0' && balanceados == 1)
       {
        if (expresion[x]==cabre)
            push(&pila, expresion[x]);
        else
        
            if (expresion[x]==ccierra)
               {
                
                if (pila_vacia(&pila) != 1)
                    pop(&pila);
                else
                    balanceados = 0;
               }
        x++;
       }

 if (balanceados == 1 && pila_vacia(&pila) == 0)
     balanceados = 0;

 
 while (pila_vacia(&pila) == 0)
        pop(&pila);

 return balanceados;
}



int EsOperador(char expresion[],char operadora)
{

int x=0;
int operador=2;
ptrPila pila = NULL;

while (expresion[x] != '\0' && operador == 2)
       {
        if (expresion[x]==operador)
            printf("es operador");
        else
        if (expresion[x]==operador)
               {
        
            if (pila_vacia(&pila) != 1)
                    pop(&pila);
                else
                    operador = 0;
               }
        x++;
       

}
}proyec
