# Programación funcional

## Funciones como valores

### Ejercicio 1
Escriba una función de orden superior que permita ejecutar una función n veces, donde n y la función debes ser argumentos.

### Ejercicio 2
Implementa una función flip (fn) recibe una función fn que devuelve otra función igual que fn pero con los parámetros intercambiados.

***Hint:*** Define una función dentro de la función flip que invoca a fn con los parámetros en orden inverso.

### Ejercicio 3
Implementa una función trace(fn) que recibe una función fn y devuelve otra que hace lo mismo que fn pero antes de ejecutarla escribe por pantalla: Ejecutando "fn (...)". Opcionalmente, en los ... aparecen los parámetros con los que ha sido ejecutada.

***Hint:*** Recuerda que puedes acceder al nombre de una función con fn.__name__.
***Hint:*** Define una función dentro de la función trace que es la que imprime el nombre de la función y la ejecuta.

***Hint:*** Esa función recibe un número variable de parámetros y se los pasa idénticos a fn.

### Ejercicio 4
Implemente las funciones map, filter y reduce por sus propias manos.

## Funciones de alto orden

### Ejercicio 5
Sin utilizar bucles, implemente una funcion que reciba dos listas y devuelva otra lista con los productos de cada par de números. 

***Hint:*** Usa la función map

## Ejercicio 6

Realice el ejercicio anterior (Ejercicio 5), utilizando listas por comprensión. 

***Hint:*** Usa la función zip

### Ejercicio 7
Escribe una función que compruebe si una lista contiene algún número impar, sin utilizar bucles.

### Ejercicio 8

Escribe una función intersec (l1, l2) que dadas dos listas devuelve otra con los elementos que están en las dos, sin utilizar set ni bucles for.

Ej. a = [2,3,5,6], b = [1,2,3,4] ==> [2, 3]

***Hint:*** Usa la función filter


### Ejercicio 9

Escribe una función que lea un fichero de esta forma:

~~~
equipo-1 0 0 0 3 0 0
equipo-2 0 1 0 0 0 1 3
~~~

Es decir, cada linea empieza por el identificador de un equipo de futbol, sin espacios, y le sigue una lista de números con los puntos que obtenido en los sucesivos partidos de la liga.

Queremos calcular el resultado de la liga. El programa debe producir una salida de la forma:

~~~
equipo-2 5
equipo-1 3
~~~

En el que cada linea empieza por el identificador de un equipo y tras cuantos espacios quiera le sigue el total de puntos que ha obtenido. correspondiente. 

El fichero de salida tiene que estar ordenado de mayor a menor. Aquí tienes un fichero de prueba.

***Hint:*** Lee el fichero con file.readlines () y separa los campos de cada linea con la función str.split ()

***Hint:*** Recuerda que puedes ordenar con la función list.sort(). Pasale una lambda al parámetro key.

### Ejercicio 10
Escribir un programa que utilice elementos de programación funcional, para calcular la longitud media de las palabras de un texto almacenados en un archivo (es decir, la suma de todas las longitudes de las palabras, dividido por el número total de palabras), no debe considerar los elementos de puntuación de cada palabra.

## Generadores

### Ejercicio 11
Implementa un generador sucesos (probabilidad) que produce una secuencia infinita de valores booleanos pseudoaletoreos con probabilidad de que sean True. es decir, retornar true si el valor aleatorio es menor a 0.5 y false en caso contrario. 

***Hint:*** Utiliza la función random.random () para generar un número pseudo-aleatoreo entre 0.0 y 1.0.

### Ejercicio 12
Implementa un generador fibonacci que produce los diferentes de la secuencia de Fibonacci, que tiene la forma:
~~~
0, 1, 1, 2, 3, 5, 8, 13, ...
~~~

Cuyos dos primeros valores son 0 y 1 por definición y el resto se calculan sumando los dos últimos valores de la sucesión.

### Ejercicio 13
Implementa un generador primos que genere todos los n numeros primos.

Ejemplo de uso
~~~
for i in generar_primos(100):
    print i;
~~~

## Decoradores

### Ejercicio 13
Implemente el ejercicio 3, utilizando decoradores

### Ejercicio 14
Define un decorador memoize que añade memoización a cualquier función. Esto significa, que para unos parámetros dados la función real sólo se ejecuta una vez, y el resto de veces consulta el resultado desde una tabla.

Como no puedes meter un diccionario como clave en un diccionario, sólo se podrán decorar así funciones que no tengan parámetros por clave.

Hint: Crea un diccionario dentro del decorador, pero fuera de la función que implementa el envoltorio. Cada vez que se ejecute el envoltorio, comprueba si la tabla contiene alguna clave con los parámetros que ha recibido.



