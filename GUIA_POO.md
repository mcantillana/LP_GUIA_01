# Guía Programación Orientada a Objetos
A continuación se presentan un conjunto de ejercicios que deben ser resueltos utilizando el paradigma de programación orientadoa a Objetos utilizando el lenguaje de programación python

## Ejercicio 1
Diseñar un programa que modele acciones y atributos de un perrro. El programa debe permitir realizar las acciones de caminar, comer, ladrar y que tenga la posibilidad de enfermarse. Al crear un objeto perro debe comenzar con 1000 unidades de energía.
Las reglas para implementar estas acciones son las siguientes:
* Cada vez que se alimenta al perro este se debe acumular 300 unidades de energía
* Cada vez que el perro camine se debe restar 200 unidades de energía
* Cada vez que el perro se enferme debe restar unidades de energía de forma aleatoria

## Ejercicio 2
Crear una clase llamada __Libro__ que guarde la información de cada uno de los libros de una biblioteca.
La clase debe guardar el título del libro, autor, número de ejemplares del libro y número de ejemplares prestados. La clase contendrá los siguientes métodos:
* Posibilidad de crear un libro con titulo, autor y numero de ejemplares
* Métodos que permitan actualizar el numero de ejemplares
* Método to_string para mostrar los datos de los libros.
* Método préstamo que incremente el atributo correspondiente cada vez que se realice un préstamo del libro. Debe devolver true si se ha podido realizar la operación y false en caso contrario. No se podrán prestar libros de los que no queden ejemplares disponibles para prestar.
* Método devolución que decremente el atributo correspondiente cuando se produzca la devolución de un libro. No se podrán devolver libros que no se hayan prestado. Devuelve true si se ha podido realizar la operación y false en caso contrario.

## Ejercicio 3
Papel, Boligrafo, Marcador

* Escribir una clase Papel que contenga un texto, un método escribir, que reciba una cadena para agregar al texto (concatenar), y el método __str__ que imprima el contenido del texto.
* Escribir una clase Boligrafo que contenga una cantidad de tinta, y un método escribir, que reciba un texto y un papel sobre el cual escribir. Cada letra escrita debe reducir la cantidad de tinta contenida. Cuando la tinta se acabe, debe lanzar una excepción.
* Escribir una clase Marcador que herede de Boligrafo, y agregue el método recargar, que reciba la cantidad de tinta a agregar.

## Ejercicio 4
Crea una clase llamada Cuenta que tendrá los siguientes atributos: titular y cantidad (puede tener decimales).

El titular será obligatorio y la cantidad es opcional. Crea un constructor que cumpla lo anterior.
Crea sus métodos get, set y to_string.
Además debe implementar dos métodos especiales:
* ingresar(cantidad): se ingresa una cantidad a la cuenta, si la cantidad introducida es negativa, no se hará nada.
* retirar(cantidad): se retira una cantidad a la cuenta, si restando la cantidad actual a la que nos pasan es negativa, la cantidad de la cuenta pasa a ser 0.

## Ejercicio 5

Haz una clase llamada Persona que siga las siguientes condiciones:

* Sus atributos son: nombre, edad, DNI, genero (H hombre, M mujer), peso y altura. No queremos que se accedan directamente a ellos por lo que debe controlar la visibilidad de estos atributos.
* Por defecto, todos los atributos menos el DNI serán valores por defecto según su tipo (0 números, cadena vacía para String, etc.). Genero sera hombre por defecto.
* Un constructor  que permita crear una objeto sin inicializar ningún atributo o con el nombre, edad y sexo, el resto por defecto o con todos los atributos como parámetro.

* Los métodos que se implementaran son:
    * __calcular_imc()__: calculara si la persona esta en su peso ideal (peso en kg/(altura^2  en m)), si esta fórmula devuelve un valor menor que 20, la función devuelve un -1, si devuelve un número entre 20 y 25 (incluidos), significa que esta por debajo de su peso ideal la función devuelve un 0  y si devuelve un valor mayor que 25 significa que tiene sobrepeso, la función devuelve un 1. Te recomiendo que uses un diccionario para devolver estos valores.
    * __es_mayor_de_edad()__: indica si es mayor de edad, devuelve un True o False según corresponda.
    * __comprobar_genero(genero)__: comprueba que el genero introducido es correcto. Si no es correcto.
    * __to_string()__: devuelve toda la información del objeto.
    * __genera_dni()__: genera un número aleatorio de 8 cifras. Este método sera invocado cuando se construya el objeto. No debe ser visible al exterior.
    * Métodos set de cada parámetro, excepto de DNI.

Ahora, debe crear el programa que pruebe la clase y debe realizar lo siguiente:

* Pide por teclado el nombre, la edad, sexo, peso y altura.
* Crea 3 objetos de la clase anterior, el primer objeto obtendrá las anteriores variables pedidas por teclado, el segundo objeto obtendrá todos los anteriores menos el peso y la altura y el último por defecto, para este último utiliza los métodos set para darle a los atributos un valor.
* Para cada objeto, deberá comprobar si esta en su peso ideal, tiene sobrepeso o por debajo de su peso ideal con un mensaje.
* Indicar para cada objeto si es mayor de edad.
* Por último, mostrar la información de cada objeto.

## Ejercicio 6
Haz una clase llamada Password que siga las siguientes condiciones:

* Que tenga los atributos longitud y contraseña. Por defecto, la longitud sera de 8.
* El constructor debe permitir crear un password sin inicializar ningún atributo o con la longitud que nosotros le indiquemos. Adenpas debe generar una contraseña aleatoria con esa longitud.

* Los métodos que implementa serán:
    * __es_fuerte()__: devuelve un booleano si es fuerte o no, para que sea fuerte debe tener mas de 2 mayúsculas, mas de 1 minúscula y mas de 5 números.
    * __generar_password()__:  genera la contraseña del objeto con la longitud que tenga.
    * Método get para contraseña y longitud.
    * Método set para longitud.

Ahora, debe crear el programa que pruebe la clase.

## Ejercicio 7
Diseñar un programa que permita modelar acciones y atributos de los animales. El programa de permitir realizar las acciones de caminar, comer y enfermarse, además debe tener como atributos el nombre y edad del animal.

A partir de la definición anterior modele la clase perro que extienda del objeto animal y que además de las acciones primarias, pueda ladrar y correr. 

Instancie un objeto de tipo perro, y considere las siguientes operaciones:
* El objeto perro debe comenzar con 1000 unidades de energía.
* Cada vez que se alimenta al perro este se debe acumular 300 unidades de energía
* Cada vez que el perro camine se debe restar 200 unidades de energía
* Cada vez que el perro se enferme debe restar unidades de energía de forma aleatoria
* Cada vez que el perro ladre se debe restar 100 unidades de energía

Construya una función *main* que permita probar el programa

<!-- ## Ejercicio 7 -->

<!-- __Juego de Rol__ -->
<!-- Escribir una clase Personaje que contenga los atributos vida, posicion y velocidad, y los métodos recibir_ataque, que reduzca la vida según una cantidad recibida y lance una excepción si la vida pasa a ser menor o igual que cero, y mover que reciba una dirección y se mueva en esa dirección la cantidad indicada por velocidad. -->
<!-- Escribir una clase Soldado que herede de Personaje, y agregue el atributo ataque y el método atacar, que reciba otro personaje, al que le debe hacer el daño indicado por el atributo ataque. -->
<!-- Escribir una clase Campesino que herede de Personaje, y agregue el atributo cosecha y el método cosechar, que devuelva la cantidad cosechada. -->
__ __
