# Guía teórica II

## Orientación a objetos

### ¿Qué es la programación orientada a objetos?
~~~
La Programación Orientada a Objetos (POO) es un método de programación en el cual los programas se organizan en colecciones cooperativas de objetos, cada uno de los cuales representa una instancia de alguna clase, y cuyas clases son, todas ellas, miembros de una jerarquía de clases unidas mediante relaciones de herencia.
~~~


### Indique las características de la programación orientada objetos (POO)
~~~
Facilita la creación de software de calidad pues sus características potencian:
La mantención
La extensión y
La reutilización del software generado bajo este paradigma
~~~

### Cuál es la idea base del paradigma POO
~~~
La POO se basa en la idea natural de un mundo lleno de objetos y que la resolución de problemas se realiza mediante el modelo de objetos
~~~

### Indique 5 ejemplos de objetos que encuentra en la vida cotidiana
~~~
Mesas
Sillas
Computadores
Autos
Cuentas bancarias
Perros
Animales
~~~

### Indique al menos 3 conceptos fundamentales que sustentan la POO
~~~
* Clase
* Objeto
* Instancia
* Atributos
* Métodos
~~~

### ¿Que es una clase en POO?
~~~
Una clase es una plantilla para la creación de objetos de datos según un modelo predefinido

Las clases son abstracciones que representan a un conjunto de objetos con un:
Comportamiento e
Interfaz común
~~~

### Nombre dos elementos fundamentales que debe poseer una clase
~~~
* Atributos (Datos)    => Estado
* Métodos (Algoritmos) => Comportamiento
~~~

### ¿Qué es una instancia y cuando ocurre? 
~~~
* Una Instancia es una ocurrencia de la clase
* Al momento de crear un objeto se produce la instanciación
* Un Objeto es una instancia de una Clase específica
~~~

### ¿Qué se entiende por encapsulamiento?
~~~
* Proceso por el que se ocultan:
    * Las estructuras de datos
    * Los detalles de la implementación
* Permite considerar a los objetos como "cajas negras", evitando que otros objetos accedan a detalles que NO LES INTERESA
* Una vez creada la clase, las funciones usuarias no requieren conocer los detalles de su implementación
~~~

### Indique en consiste la Herencia en la POO

~~~
* Permite reutilizar código creando nuevas clases a partir de las existentes (construidas y depuradas)
* Compromete una relación de jerarquía de clases (es-un) 
* Una nueva clase se generará agregando atributos y/o código a una clase existente
* Una clase (derivada) puede heredar de otra clase (base): Atributos y Métodos
~~~

### Indique en consiste el Polimorfismo

~~~
* Capacidad que permite a dos clases diferentes responder de forma distinta a un mismo mensaje
* Esto significa que dos clases que tengan un método con el mismo nombre y que respondan al mismo tipo de mensaje (es decir, que reciban los mismo parámetros), ejecutarán acciones distintas
~~~

### Qué son los mensajes y como se utilizan en la POO
~~~
* Mecanismo por el cual se solicita una acción sobre el objeto
* Un programa en ejecución es una colección de objetos que se crean, interactúan y se detruyen
* La interacción se basa en mensajes que son enviados de un objeto a otro, de modo que el emisor le pide al receptor la ejecución de un método
* Un objeto invoca un método como una reacción al recibir un mensaje
* La interpretación del mensaje dependerá del receptor
~~~

### ¿Cómo se define el método constructor en una clase utilizando python?
~~~
def __init__(*args,**kwargs)
~~~

### ¿Por que en python el polimorfismo no aplica en la definición de métodos constructores?
~~~
Debido a la naturaleza de python, no existe el polimorfismo debido a que podemos definir atributos por defecto en el método constructor y con ello conseguir instanciar un objetos con diferentes opciones. 
Python provee además definir métodos con argumentos variables a través de  *args y **kwargs
~~~

## Programación Concurrente

### Defina el concepto de concurrencia
~~~
Se habla de concurrencia cuando ocurren varios sucesos de manera contemporánea.

En base a esto, la concurrencia en computación está asociada a la “ejecución” de varios procesos que coexisten temporalmente.
~~~

### ¿Que es la programación concurrente?
~~~
La programación concurrente es el desarrollo de programas en donde dos o más procesos son contemporáneos.

La programación concurrente se encarga del estudio de las nociones de ejecución concurrente, así como sus problemas de comunicación y sincronización.
~~~



### Indique las diferencias entre Concurrencia Software vs. Paralelismo Hardware
~~~
La concurrencia software es un concepto lógico, no implica la existencia de paralelismo en el hardware:
 
* Las operaciones hardware ocurren en paralelo si ocurren al mismo tiempo.
* Las operaciones (software) en un programa son concurrentes si pueden ejecutarse en paralelo, aunque no necesariamente deben ejecutarse así.
~~~

### Indique los tipos de concurrencia existentes
~~~
* Concurrencia Física: Existe más de un procesador y varias unidades (hilos) de un mismo programa se ejecutan realmente de forma simultánea.
* Concurrencia Lógica: Asumir la existencia de varios procesadores, aunque no existan físicamente. El implementador de tareas del lenguaje se encargará de “mapear” la concurrencia lógica sobre el hardware realmente disponible.
* La concurrencia lógica es más general, pues el diseño del programa no está condicionado por los recursos de computación disponibles.
~~~

### ¿Cuando un lenguaje de programación es concurrente?
~~~
Un Lenguaje de Programación será concurrente si posee las estructuras necesarias para definir y manejar diferentes tareas (hilos de ejecución) dentro de un programa. 
~~~

### En python existen dos formas principales para la implementación de concurrencia, indiquelas
~~~
Multithreading & Multiprocessing
~~~

### Utilizando Thread con python, nombre tres mecanismos que provee el lenguaje para controlar la sincronización

~~~
* Lock
* Semaphore
* Event
* Condition
* Barrier
~~~

### ¿Que es Multiprocessing en python?
~~~
Es un paquete que permite crear nuevos procesos utilizando un API similar a la del módulo threading.
~~~

### Nombre al menos 3 diferencias entre hilo y proceso
~~~
* Un hilo ocurre dentro del espacio de memoria de un programa.
* Un proceso es una copia completa del programa.
* Ambos administran los recursos de formas diferentes.
* Mientras que los diferentes procesos de un mismo programa ocupan diferentes espacios en la memoria, diferentes hilos comparten un mismo espacio.
* Thread evita el aprovechamiento de las múltiples CPUs del sistema.
* Multiprocessing incluye módulos para intercambiar objetos entre los procesos (incluyendo dos métodos de comunicación), compartir memoria (poco recomendado) y sincronizarlos.
~~~

### Son rápidos de crear y destruir y consumen poca memoria: a que nos referimos con esta definición
~~~ 
Hilos 
~~~

### Son lentos de crear y destruir además de que requieren clonar el espacio de memoria del programa en otro lugar de la RAM, y esto es lento: a que nos referimos con esta definición.
~~~
Procesos
~~~

### Nombre una desventaja de usar thread & Process
~~~
Los cambios de contexto pueden ser costos en ambos casos.
~~~

### ¿Las colas y Locks son estrucuras exclusivas de Multiprocessing?
~~~
Falso, pueden ser utilizados tanto en Multiprocessing como en Threading, pero tienen implementaciones diferentes
~~~

### Los pipes son un mecanismo de sincronización propio de Threading?
~~~
Falso, debido a que es un mecanismo propio de los multiprocessing
~~~

### Qué otras opciones provee Python para realizar programación concurrente, nombre al menos 1?
~~~
* Twisted
* Genevet (Co-rutinas)
* AsyncIO 
~~~

## Programación funcional

### ¿Qué es la programación funcional?
~~~
Es un paradigma de programación que está basado en funciones.
Se entiende el concepto de función según su definición matemática y no como simples subprogramas de los lenguajes imperativos.
~~~

### Nombre al menos tres características de los lenguajes funcionales
~~~
* Estructuras inmutables eficientes.
* Funciones de orden superior.
* Pattern matching.
* Funciones lambda.
* Evaluación perezosa.
* Composición de funciones.
~~~

### Nombre al menos dos características que nos provee Python relacionado al paradigma funcional
~~~
* Funciones de primer orden.
* Funciones lambda.
* Funciones de orden superior.
* Evaluación perezosa (Limitada).
~~~

### ¿Cuáles son las estratégias que requiere utilizar para la resolución de problemas utilizando el paradigma funcional? nombre al menos 3
~~~
* WCombinación y composición de funciones pequeñas.
* Datos + funciones transformadoras.
* Aplicación de transformaciones mediante orden superior.
* Uso de funciones inline.
* Tendencia al uso de funciones puras.
~~~

### ¿Como abordaría la resolución de un problema utilizando el paradigma funcional y orientación a objetos?
~~~
Macrodiseño ⇒ Orientación a Objetos
Microdiseño ⇒ Programación Funcional
~~~

### ¿Cuáles son las características de las Funciones de primer orden en el paradigma funcional?
~~~
* Genericidad: Las funciones pueden pasarse como parámetro.
* Instanciación: Las funciones pueden devolver otras funciones.
* Abstracción procedural: Cualquier sentencia puede convertirse en función.
* Embebimiento: Las funciones pueden almacenerse en estructuras de datos.
~~~

### Nombre las tres funciones de alto orden presentes en lenguaje python
~~~
* Map
* Reduce
* Filter
~~~


