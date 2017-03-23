# Guía 01
Guía 1 de programación imperativa en lenguaje de programación C

## Ejercicio 1
Desarrolle un algoritmo que permita leer dos valores distintos, determinar cual de los dos valores es el mayor y mostrar por pantalla.

## Ejercicio 2
Escriba un programa en lenaguaje de programación, que permita realizar el juego de piedra, papel o tijera.

## Ejercicio 3
Escriba un programa que pida al usuario un entero de tres dígitos, y entregue el número con los dígitos en orden inverso: Ingrese numero: 345 => 543

## Ejercicio 4
Desarrolle un algoritmo que realice la sumatoria de los números enteros comprendidos entre el 1 y el 10, es decir, 1 + 2 + 3 + …. + 10.

## Ejercicio 5
Desarrolle un algoritmo que permita leer un valor cualquiera N y escriba si dicho número es par o impar.

## Ejercicio 6
Desarrolle un algoritmo que permita leer un valor entero positivo N y determinar si es primo o no. 

## Ejercicio 7
Escriba un programa que permita determinar el promedio perteneciente a un conjunto de n notas almacenadas en un arreglo de enteros, donde tanto el valor de n como el de los notas deben ser ingresados por el usuario.

## Ejercicio 8
Escriba un programa que permita determinar el número mayor perteneciente a un conjunto de n números, donde tanto el valor de n como el de los números deben ser ingresados por el usuario.
*Hint:*
```
Ingrese n: 4
Ingrese número: 23
Ingrese número: -34
Ingrese número: 0
Ingrese número: 1
El mayor es 23
```

## Ejercicio 9
Dados los arreglos: a {0, 1, 2, 3, 4} y b {5, 6, 7, 8, 9}, escriba un programa en C que:

* Muestre en pantalla dichos arreglos utilizando un ciclo for.
* Genere un nuevo arreglo llamado c, a partir de la suma de los arreglos a y b.

## Ejercicio 10
Escriba una función en C que dado un arreglo de enteros, un valor X y el largo del arreglo, busque X en el arreglo. El programa debe imprimir en pantalla si encontró X y en qué posición.
*Hint: puede crear un arreglo inicializado*

## Ejercicio 11
sí como hay números palíndromos, también hay palabras palíndromas, que son las que no cambian al invertir el orden de sus letras.
Por ejemplo, __«reconocer»__, __«Neuquén»__ y __«acurruca»__ son palíndromos.
Escriba un programa que reciba como entrada una palabra e indique si es palíndromo o no. Para simplificar, suponga que la palabra no tiene acentos y todas sus letras son minúsculas:
```
Ejemplos

Ingrese palabra: sometemos
Es palindromo
 
Ingrese palabra: rascar
No es palindromo
```

## Ejercicio 12
Escriba una función en C, que permita calcular el factorial de un número.
Hint: El factorial de n o n factorial se define en principio como el producto de todos los números enteros positivos desde 1 (es decir, los números naturales) hasta n.
Por ejemplo, 5 ! = 1 × 2 × 3 × 4 × 5 = 120.

## Ejercicio 13
El número de Euler, e ≈ 2,71828, puede ser representado como la siguiente suma infinita:

![imagen número euler](images/serie_euler.png)

Desarrolle un programa que entregue un valor aproximado de e, calculando esta suma hasta que la diferencia entre dos sumandos consecutivos sea menor que 0,0001. 
Recuerde que el factorial n! es el producto de los números de 1 a n.

## Ejercicio 13
Alzas del dólar
Un analista financiero lleva un registro del precio del dólar día a día, y desea saber cuál fue la mayor de las alzas en el precio diario a lo largo de ese período.

Escriba un programa que pida al usuario ingresar el número n de días, y luego el precio del dólar para cada uno de los n días.

El programa debe entregar como salida cuál fue la mayor de las alzas de un día para el otro.

Si en ningún día el precio subió, la salida debe decir: No hubo alzas.
```
Cuantos dias? 10
Dia 1: 496.96
Dia 2: 499.03
Dia 3: 496.03
Dia 4: 493.27
Dia 5: 488.82
Dia 6: 492.16
Dia 7: 490.32
Dia 8: 490.67
Dia 9: 490.89
Dia 10: 494.10
La mayor alza fue de 3.34 pesos
```

## Ejercicio 14
Histograma
Escriba un programa que pida al usuario que ingrese varios valores enteros, que pueden ser positivos o negativos. Cuando se ingrese un cero, el programa debe terminar y mostrar un gráfico de cuántos valores positivos y negativos fueron ingresados:
```
Ingrese varios valores, termine con cero:
-17
-12
14
-5
-8128
3
-2
-9
1500
-43
0
Positivos: ***
Negativos: *******
```

## Ejercicio 15
Desarrolle un programa que tenga la siguiente entrada:

* primero, el usuario ingresa un número entero n, que indica cuántas palabras ingresará a continuación;
* después el usuario ingresa n palabras.

La salida del programa debe mostrar la palabra más larga y la más corta que fueron ingresadas por el usuario.

Recuerde que la función strlen entrega el largo de un string.

La ejecución del programa debe verse así:
```
Cantidad de palabras: 5
Palabra 1: negro
Palabra 2: amarillo
Palabra 3: naranjo
Palabra 4: azul
Palabra 5: blanco
La palabra mas larga es amarillo
La palabra mas corta es azul
```

## Ejercicio 16
Escriba un programa que pida al usuario dos palabras, y que indique cuál de ellas es la más larga y por cuántas letras lo es.
```
Palabra 1: edificio
Palabra 2: tren
La palabra edificio tiene 4 letras mas que tren.
```

```
Palabra 1: sol
Palabra 2: paralelepipedo
La palabra paralelepipedo tiene 11 letras mas que sol

```

```
Palabra 1: plancha
Palabra 2: lapices
Las dos palabras tienen el mismo largo
```

## Ejercicio 17
Desarrollo una función en lenguaje de programación en C que se encargue de encriptar un mensaje, para ello debe recibir una cadena de texto como parámetro de entrada, a esta cadena se sumará 2 al código ASCII del carácter. Además debe crear otra función que desencripte el mensaje anterior.

## Ejercicio 18
Una serie de tiempo es una secuencia de valores numéricos obtenidos al medir algún fenómeno cada cierto tiempo. Algunos ejemplos de series de tiempo son: el precio del dólar en cada segundo, el nivel medio mensual de concentración de SO~4~ en el aire y las temperaturas máximas anuales de una ciudad. En un programa, los valores de una serie de tiempo se pueden guardar en un arreglo.

Las medias móviles con retardo $p$ de una serie de tiempo son la secuencia de todos los promedios de $p$ valores consecutivos de la serie.

Por ejemplo, si los valores de la serie son {5,2,2,8,−4,−1,2}{5,2,2,8,−4,−1,2} entonces las medias móviles con retardo 3 son: $$\frac{5+2+2}{3}$$, $$\frac{2+2+8}{3}$$, $$\frac{2+8−4}{3}$$, $$\frac{8−4−1}{3}$$, $$\frac{−4−1+2}{3}$$.

Escriba la función __medias_moviles(serie, p)__ que retorne el arreglo de las medias móviles con retardo $p$ de la serie:

~~~
float serie[] = {5, 2, 2, 8, -4, -1, 2} ;
medias = medias_moviles(serie, 3);
~~~



## Ejercicio 19

## Ejercicio 20

