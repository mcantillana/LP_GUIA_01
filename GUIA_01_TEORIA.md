# Guía 01 / Teoría

##

## Ejercicio

Dado la siguiente inicialización de variables
int i=3, j=5,k=2,\*p=&i, \*q=&j,\*r;
double x=11.;

Indicar el valor resultante o si es una operación ilicita, de la siguientes expresiones:
* p==(&i) 
* \*(\*(&p))  
* r=(&x)    
* ((3\*(-(\*p))) / (\*q)) + 7  
* (\*(r=&j))=((\*p)\*(\*q))

## Ejercicio 03

Determine el resultado que almacenan las variables ptc y ptn al final de la ejecución de las siguientes líneas.

~~~
int *ptc, *ptn,  b=20;
ptc = &b;
ptn = malloc ( sizeof (int));
*ptn = b + 15;
*ptc = *ptc -1;
ptc = ptn;
*ptc = 2;
~~~

## Ejercicio 04

Dado el siguiente código, indique el valor del vector B al final de la ejecución del programa.

~~~
int B[] = {3,4,1,2,7,12,-4}; 
float f = 4.234, *ptf;
*(B+3) = *B + 15;
ptf = &f;
*B = (int)(*ptf);
f = *ptf +  20;
*(B + 5) =  (int)(*ptf);
~~~


## Ejercicio 

Si ptrLetra es un puntero a un char, ¿qué hace la instrucción \*ptrLetra++=3;? ¿y la instrucción (\*ptrLetra)++=3;? ¿son iguales? ¿o nos factibles de realizar?. Fundamente su respuesta.

## Ejercicio

¿Qué valor tendrá la variable a tras la ejecución de este programa?
~~~
int main () {
    int a = 5; // a vale 5
    int *p; int **q;
    p = &a; // p apunta a la variable a
    q = &p; // q apunta a p
    a = *p*2+**q;
     // a = 5*2+5=15
}
~~~

## Ejercicio 

Utilizando la notación de vectores puedes acceder a la quinta posición (posición 4, ya que los índices empiezan en 0) de un vector v mediante la expresión v[4]. ¿Cómo harías referencia a dicha posición usando notación y aritmética de punteros? 

## Ejercicio


Si quiero incrementar en una unidad el contenido de la variable a la que apunta un puntero p, indica cuáles de las siguientes instrucciones serían válidas: 
* \*p = \*p + 1; 
* \*p += 1; 
* \++\*p; 
* \*p++;

## Ejercicio 
Indica los valores que tendrán al final de la ejecución del siguiente código las variables letra1, letra2 y letra3 en cada caso.

 char* cadena = "Hola";
 char letra0 = *cadena; // Asignando „H‟ a letra0
 char letra1 = *(cadena+1); // Asignando „o‟ a letra1
 char letra2 = *(cadena+2); // Asignando „l‟ a letra2
 char letra3 = *(cadena+3); // Asignando „a‟ a letra3

## Ejercicio
Teniendo el código.
char letra = 'A';
char* puntero = &letra;

Indicar cuáles de las siguientes asignaciones son incorrectas y podrían producir errores:

letra = *puntero;
letra = &letra;
letra = &puntero;
puntero = *puntero;
puntero = *(&puntero);
puntero = *letra;
*puntero = letra;
&puntero = letra;

## Ejercicio

¿Contenidos de letra1 y letra2 al final del código? ¿A quién apuntan los punteros al  final?

char letra1 = 'A';
char letra2 = 'B';
char* puntero1 = &letra1; //el puntero1 apunta a letra1
char* puntero2 = &letra2; //el puntero2 apunta a letra2
puntero1 = puntero2; /* puntero1 apunta ahora a la misma
variable a la que apunta puntero2, es decir, apunta a letra2 */
letra1 = 'C';
letra2 = 'D';
letra1 = *puntero1; /* puntero1 apunta a letra2; letra2 lo
hemos cambiado en la instrucción anterior al valor „D‟; por lo
tanto le estoy asignado dicho valor a letra1. */
