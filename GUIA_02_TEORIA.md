<style>

</style>
# Guía teórica II

## Orientación a objetos

### ¿Qué es la programación orientada a objetos?
<div class="answer">
La Programación Orientada a Objetos (POO) es un método de programación en el cual los programas se organizan en colecciones cooperativas de objetos, cada uno de los cuales representa una instancia de alguna clase, y cuyas clases son, todas ellas, miembros de una jerarquía de clases unidas mediante relaciones de herencia.
</div>


### Indique las características de la programación orientada objetos (POO)
<div class="answer">
Facilita la creación de software de calidad pues sus características potencian:
La mantención
La extensión y
La reutilización del software generado bajo este paradigma
</div>

### Cuál es la idea base del paradigma POO
<div class="answer">
La POO se basa en la idea natural de un mundo lleno de objetos y que la resolución de problemas se realiza mediante el modelo de objetos
</div>

### Indique 5 ejemplos de objetos que encuentra en la vida cotidiana
<div class="answer">
Mesas
Sillas
Computadores
Autos
Cuentas bancarias
Perros
Animales
</div>

### Indique al menos 3 conceptos fundamentales que sustentan la POO
<div class="answer">
* Clase
* Objeto
* Instancia
* Atributos
* Métodos
</div>

### ¿Que es una clase en POO?
<div class="answer">
Una clase es una plantilla para la creación de objetos de datos según un modelo predefinido

Las clases son abstracciones que representan a un conjunto de objetos con un:
Comportamiento e
Interfaz común
</div>

### Nombre dos elementos fundamentales que debe poseer una clase
<div class="answer">
* Atributos (Datos)    => Estado
* Métodos (Algoritmos) => Comportamiento
</div>

### ¿Qué es una instancia y cuando ocurre? 
<div class="answer">
* Una Instancia es una ocurrencia de la clase
* Al momento de crear un objeto se produce la instanciación
* Un Objeto es una instancia de una Clase específica
</div>

### ¿Qué se entiende por encapsulamiento?
<div class="answer">
* Proceso por el que se ocultan:
    * Las estructuras de datos
    * Los detalles de la implementación
* Permite considerar a los objetos como "cajas negras", evitando que otros objetos accedan a detalles que NO LES INTERESA
* Una vez creada la clase, las funciones usuarias no requieren conocer los detalles de su implementación
</div>

### Indique en consiste la Herencia en la POO

<div class="answer">
* Permite reutilizar código creando nuevas clases a partir de las existentes (construidas y depuradas)
* Compromete una relación de jerarquía de clases (es-un) 
* Una nueva clase se generará agregando atributos y/o código a una clase existente
* Una clase (derivada) puede heredar de otra clase (base): Atributos y Métodos
</div>

### Indique en consiste el Polimorfismo

<div class="answer">
* Capacidad que permite a dos clases diferentes responder de forma distinta a un mismo mensaje
* Esto significa que dos clases que tengan un método con el mismo nombre y que respondan al mismo tipo de mensaje (es decir, que reciban los mismo parámetros), ejecutarán acciones distintas
</div>

### Qué son los mensajes y como se utilizan en la POO
<div class="answer">
* Mecanismo por el cual se solicita una acción sobre el objeto
* Un programa en ejecución es una colección de objetos que se crean, interactúan y se detruyen
* La interacción se basa en mensajes que son enviados de un objeto a otro, de modo que el emisor le pide al receptor la ejecución de un método
* Un objeto invoca un método como una reacción al recibir un mensaje
* La interpretación del mensaje dependerá del receptor
</div>

### ¿Cómo se define el método constructor en una clase utilizando python?
<div class="answer">
def __init__(*args,**kwargs)
</div>

### ¿Por que en python el polimorfismo no aplica en la definición de métodos constructores?
<div class="answer">
Debido a la naturaleza de python, no existe el polimorfismo debido a que podemos definir atributos por defecto en el método constructor y con ello conseguir instanciar un objetos con diferentes opciones. 
Python provee además definir métodos con argumentos variables a través de  *args y **kwargs
</div>

## Programación Concurrente

### Defina el concepto de concurrencia
<div class="answer">
Se habla de concurrencia cuando ocurren varios sucesos de manera contemporánea.

En base a esto, la concurrencia en computación está asociada a la “ejecución” de varios procesos que coexisten temporalmente.
</div>

### ¿Que es la programación concurrente?
<div class="answer">
La programación concurrente es el desarrollo de programas en donde dos o más procesos son contemporáneos.

La programación concurrente se encarga del estudio de las nociones de ejecución concurrente, así como sus problemas de comunicación y sincronización.
</div>


### Indique las diferencias entre Concurrencia Software vs. Paralelismo Hardware
<div class="answer">
La concurrencia software es un concepto lógico, no implica la existencia de paralelismo en el hardware:
 
* Las operaciones hardware ocurren en paralelo si ocurren al mismo tiempo.
* Las operaciones (software) en un programa son concurrentes si pueden ejecutarse en paralelo, aunque no necesariamente deben ejecutarse así.
</div>

### Indique los tipos de concurrencia existentes
<div class="answer">
* Concurrencia Física: Existe más de un procesador y varias unidades (hilos) de un mismo programa se ejecutan realmente de forma simultánea.
* Concurrencia Lógica: Asumir la existencia de varios procesadores, aunque no existan físicamente. El implementador de tareas del lenguaje se encargará de “mapear” la concurrencia lógica sobre el hardware realmente disponible.
* La concurrencia lógica es más general, pues el diseño del programa no está condicionado por los recursos de computación disponibles.
</div>

### ¿Cuando un lenguaje de programación es concurrente?
<div class="answer">
Un Lenguaje de Programación será concurrente si posee las estructuras necesarias para definir y manejar diferentes tareas (hilos de ejecución) dentro de un programa. 
</div>

### En python existen dos formas principales para la implementación de concurrencia, indiquelas
<div class="answer">
Multithreading & Multiprocessing
</div>

### Utilizando Thread con python, nombre tres mecanismos que provee el lenguaje para controlar la sincronización

<div class="answer">
* Lock
* Semaphore
* Event
* Condition
* Barrier
</div>

### ¿Que es Multiprocessing en python?
<div class="answer">
Es un paquete que permite crear nuevos procesos utilizando un API similar a la del módulo threading.
</div>

### Nombre al menos 3 diferencias entre hilo y proceso
<div class="answer">
* Un hilo ocurre dentro del espacio de memoria de un programa.
* Un proceso es una copia completa del programa.
* Ambos administran los recursos de formas diferentes.
* Mientras que los diferentes procesos de un mismo programa ocupan diferentes espacios en la memoria, diferentes hilos comparten un mismo espacio.
* Thread evita el aprovechamiento de las múltiples CPUs del sistema.
* Multiprocessing incluye módulos para intercambiar objetos entre los procesos (incluyendo dos métodos de comunicación), compartir memoria (poco recomendado) y sincronizarlos.
</div>

### Son rápidos de crear y destruir y consumen poca memoria: a que nos referimos con esta definición
<div class="answer"> 
Hilos 
</div>

### Son lentos de crear y destruir además de que requieren clonar el espacio de memoria del programa en otro lugar de la RAM, y esto es lento: a que nos referimos con esta definición.
<div class="answer">
Procesos
</div>

### Nombre una desventaja de usar thread & Process
<div class="answer">
Los cambios de contexto pueden ser costos en ambos casos.
</div>

### ¿Las colas y Locks son estrucuras exclusivas de Multiprocessing?
<div class="answer">
Falso, pueden ser utilizados tanto en Multiprocessing como en Threading, pero tienen implementaciones diferentes
</div>

### Los pipes son un mecanismo de sincronización propio de Threading?
<div class="answer">
Falso, debido a que es un mecanismo propio de los multiprocessing
</div>

### Qué otras opciones provee Python para realizar programación concurrente, nombre al menos 1?
<div class="answer">
* Twisted
* Genevet (Co-rutinas)
* AsyncIO 
</div>

## Programación funcional

### ¿Qué es la programación funcional?
<div class="answer">
Es un paradigma de programación que está basado en funciones.
Se entiende el concepto de función según su definición matemática y no como simples subprogramas de los lenguajes imperativos.
</div>

### Nombre al menos tres características de los lenguajes funcionales
<div class="answer">
* Estructuras inmutables eficientes.
* Funciones de orden superior.
* Pattern matching.
* Funciones lambda.
* Evaluación perezosa.
* Composición de funciones.
</div>

### Nombre al menos dos características que nos provee Python relacionado al paradigma funcional
<div class="answer">
* Funciones de primer orden.
* Funciones lambda.
* Funciones de orden superior.
* Evaluación perezosa (Limitada).
</div>

### ¿Cuáles son las estratégias que requiere utilizar para la resolución de problemas utilizando el paradigma funcional? nombre al menos 3
<div class="answer">
* WCombinación y composición de funciones pequeñas.
* Datos + funciones transformadoras.
* Aplicación de transformaciones mediante orden superior.
* Uso de funciones inline.
* Tendencia al uso de funciones puras.
</div>

### ¿Como abordaría la resolución de un problema utilizando el paradigma funcional y orientación a objetos?
<div class="answer">
Macrodiseño ⇒ Orientación a Objetos
Microdiseño ⇒ Programación Funcional
</div>

### ¿Cuáles son las características de las Funciones de primer orden en el paradigma funcional?
<div class="answer">
* Genericidad: Las funciones pueden pasarse como parámetro.
* Instanciación: Las funciones pueden devolver otras funciones.
* Abstracción procedural: Cualquier sentencia puede convertirse en función.
* Embebimiento: Las funciones pueden almacenerse en estructuras de datos.
</div>

### Nombre las tres funciones de alto orden presentes en lenguaje python
<div class="answer">
* Map
* Reduce
* Filter
</div>


