# Guía 01 / Teoría

## Ejericio 1
¿Qué es un paradigma de programación?

## Ejericio 2
Los paradignmas de programación se dividen en dos grandes grupos, indiquelos y que paradigmas están representados por cada grupo.

## Ejericio 3
Indique tres diferencias entre un paradigma funcional y un paradigma imperativo

## Ejericio 4
El polimorfismo a que se refiere y en que paradigma se ve su implementación?

## Ejericio 5
Compiladores e intérpretes, indique tres diferencias asociadas a estas estrategias para conseguir que un programa se ejecute en un ordenador

## Ejericio 6
El lenguaje C en un lenguaje con un paradigma orientado a objetos? justifique su respuesta.

## Ejericio 7
Indique tres ejemplos de software construido bajo el lenguaje de programación C

## Ejericio 8
Indique las cuatro etapas que se deben realizar para ejecutar un programa en el lenguaje C

## Ejericio 9
Indique la diferencia de las siguientes operaciones
* i++
* ++i

## Ejericio 10
¿Que operación es más eficiente?
* a++
* a+=1

## Ejericio 11
Este es el prototipo de la función main en lenguahe C, int main(int argc, char *argv[]). Que representa argc y argv ?

## Ejericio 12
Dado la siguiente definición:
~~~
int *punt = NULL, var = 14;
punt = &var;
~~~

¿Cual es la diferencia entre \*(punt + 1) y punt + 1 ?

## Ejericio 13
Al trabajar con punteros se emplean dos operadores específicos, indique y defina cada operador.

## Ejericio 14
Dado el siguiente código

~~~
int main(int) {
    int a, b, c, *p1, *p2;

    p1 = &a; // Paso 1. La dirección de a es asignada a p1
    *p1 = 1; // Paso 2. p1 (a) es igual a 1. Equivale a a = 1;
    p2 = &b; // Paso 3. La dirección de b es asignada a p2
    *p2 = 2; // Paso 4. p2 (b) es igual a 2. Equivale a b = 2;
    p1 = p2; // Paso 5. El valor del p1 = p2
    *p1 = 0; // Paso 6. b = 0
    p2 = &c; // Paso 7. La dirección de c es asignada a p2
    *p2 = 3; // Paso 8. c = 3

    printf("%d %d %d\n", a, b, c); // Paso 9. ¿Qué se imprime?
    

    return 0;
}
~~~

Cuál es el valor de de a,b y C al finalizar la ejecución del programa?

## Ejericio 15
Es valida ésta expresión __&(k+99)__ al trabajar con punteros?

## Ejericio 16
¿Que resultado tiene la variable a, en la siguiente operación?
~~~
a = sizeof(long int * int)
~~~

## Ejericio 17
Explique el funcionamiento de la función mallo en lenguaje C


## Ejericio 18
¿Cual es el valor de ***x*** al ejecutar la siguiente instrucción?
~~~
x = (int *)malloc(10*sizeof(int));
~~~


## Ejercicio 19
Es válida la siguiente instrucción? si es válida cual es el valor de ***y***
~~~
y=(int *)malloc(10*sizeof(double));
~~~

## Ejercicio 20

Dado la siguiente inicialización de variables
~~~
int i=3, j=5,k=2,\*p=&i, \*q=&j,\*r;
double x=11.;
~~~
Indicar el valor resultante o si es una operación ilicita, de la siguientes expresiones:
* p==(&i) 
* \*(\*(&p))  
* r=(&x)    
* ((3\*(-(\*p))) / (\*q)) + 7  
* (\*(r=&j))=((\*p)\*(\*q))

## Ejercicio 21

Determine el resultado que almacenan las variables ptc y ptn al final de la ejecución de las siguientes líneas

~~~
int *ptc, *ptn,  b=20;
ptc = &b;
ptn = malloc ( sizeof (int));
*ptn = b + 15;
*ptc = *ptc -1;
ptc = ptn;
*ptc = 2;
~~~

## Ejercicio 22

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


## Ejercicio 23

Si ***ptrLetra*** es un puntero a un char, ¿qué hace la instrucción \*ptrLetra++=3;? ¿y la instrucción (\*ptrLetra)++=3;? ¿son iguales? ¿o no son factibles de realizar?. Fundamente su respuesta.

## Ejercicio 24

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

## Ejercicio 25

Utilizando la notación de vectores puedes acceder a la quinta posición (posición 4, ya que los índices empiezan en 0) de un vector ***v*** mediante la expresión v[4]. ¿Cómo harías referencia a dicha posición usando notación y aritmética de punteros? 

## Ejercicio 26

Si quiero incrementar en una unidad el contenido de la variable a la que apunta un puntero p, ¿cuáles de las siguientes instrucciones serían válidas?: 
* \*p = \*p + 1; 
* \*p += 1; 
* \++\*p; 
* \*p++;

## Ejercicio 27
Indica los valores que tendrán al final de la ejecución del siguiente código las variables letra1, letra2 y letra3 en cada caso.
~~~
 char* cadena = "Hola";
 char letra0 = *cadena; // Asignando „H‟ a letra0
 char letra1 = *(cadena+1); // Asignando „o‟ a letra1
 char letra2 = *(cadena+2); // Asignando „l‟ a letra2
 char letra3 = *(cadena+3); // Asignando „a‟ a letra3
~~~

## Ejercicio 28
Teniendo el código.
~~~
char letra = 'A';
char* puntero = &letra;
~~~

Indicar cuáles de las siguientes asignaciones son incorrectas y podrían producir errores:

* letra = \*puntero;
* letra = &letra;
* letra = &puntero;
* puntero = \*puntero;
* puntero = \*(&puntero);
* puntero = \*letra;
* \*puntero = letra;
* &puntero = letra;

## Ejercicio 29
Dado el siguiente código

~~~
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
~~~

¿Cuáles son los contenidos de letra1 y letra2 al final del código? 

## Ejercicio 30

Dado el ejercicio anterior, ¿A quién apuntan los punteros al final de la ejecución del código?

