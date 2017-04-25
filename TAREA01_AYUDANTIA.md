# TAREA 01 / ORIENTACION A OBJETOS

Nos solicitan modelar diferentes electrodomesticos bajo un conjunto de reglas que se describen a continuación. Se debe crear una clase padre llamada Electrodomestico con las siguientes características:
* Sus atributos son precio base, color, consumo energético (letras entre A y F) y peso.
* Por defecto, el color será blanco, el consumo energético sera F, el precio_base es de 100 CLP y el peso de 5 kg. 
* Los colores disponibles son blanco, negro, rojo, azul y gris. 
* El constructor a implementar debe poder realizar las siguientes posibilidades al momento de instanciar el objeto:
    * Crear un objeto sin argumentos (se deben aplicar los valores por defecto para este caso)
    * Crear un objeto con el precio y peso. El resto por defecto.
    * Crear un objeto con con todos los atributos

Los métodos que se deben implementar serán:

* Métodos get de todos los atributos.
* __comprobarConsumoEnergetico(letra)__: método que permirá comprobar si la letra a utilizar para crear el objeto es correcta, sino es correcta usara la letra por defecto. Se invocara al crear el objeto y no sera visible.
* __comprobarColor(color)__: método que permitirá comprobar que el color a utilizar al momento de crear el objeto es correcto, sino lo es usa el color por defecto. Se invocara al crear el objeto y no sera visible.
* precio_final(): método que retornará el precio final del electrodométisco. El valor se calculará según el consumo energético y tamaño. en ambos casos el precio aumentará su valor de precio, estos aumentos estarán dado por la siguiente tabla:

LETRA | PRECIO
-- | --
A | 100 CLP
B | 80 CLP
C | 60 CLP
D | 50 CLP
E | 30 CLP
F | 10 CLP


TAMAÑO | PRECIO
-- | --
Entre 0 y 19 kg | 10 CLP
Entre 20 y 49 kg | 50 CLP
Entre 50 y 79 kg | 80 CLP
Mayor que 80 kg | 100 CLP

Además debemos crear una clase __Lavadora__ que herede de la clase Electrodomestico e implemente las siguientes características:

* Crear un atributo llamado carga, ademas de los atributos heredados de la clase Electrodomestico.
* Por defecto el atributo carga será de 5 kg. 
* El constructor a implementar debe permitar la instanciación de las siguientes combinación:
    * Posibilidad de crear un objeto con los valores por defecto.
    * Posibilidad de crear un objeto con el precio y peso. El resto utilizar los valores por defecto.
    * Posibilidad de crear un objeto con la carga y el resto de atributos heredados. Recuerda que debes llamar al constructor de la clase padre.
* Los métodos que se implementara serán:
    * Método get de carga.
    * __precio_final()__:, si tiene una carga mayor de 30 kg, aumentara el precio 50 CLP, sino es así no se incrementara el precio. Llama al método padre y añade el código necesario. Recuerda que las condiciones que hemos visto en la clase Electrodomestico también deben afectar al precio.

Por último crear la clase Television con las siguientes características:

* Sus atributos deben ser resolución (en pulgadas) y sintonizador TDT (booleano), ademas de los atributos heredados.
* Por defecto, la resolución sera de 20 pulgadas y el sintonizador sera False.
* El constructor a implementar debe permitir la creación de objetos con las siguientes combinaciones: 
    * Posibilidad de crear un objeto con los valores por defecto
    * Posibilidad de crear un objeto con el precio y peso. El resto por defecto
    * Posibilidad de crear un objeto con resolución, sintonizador TDT y el resto de atributos heredados. Recuerda que debes llamar al constructor de la clase padre.
* Los métodos que se implementara serán:
    * Método get de resolución y sintonizador TDT.
    * __precio_final()__: si tiene una resolución mayor de 40 pulgadas, se incrementara el precio un 30% y si tiene un sintonizador TDT incorporado, aumentara 50 CLP. Recuerda que las condiciones que hemos visto en la clase Electrodomestico también deben afectar al precio.

Crear la función __main__ para ejecutar el programa con lo siguiente:
* Crea una lista de 10 Electrodomesticos.
* Asigna a cada posición un objeto de las clases anteriores con los valores que desees (Lavadora, Electrodomestico o Televisor).
* Recorrer la lista e invocar el método __precio_final()__.
* Mostrar el precio de cada objeto, es decir, el precio de todas las televisiones por un lado, el de las lavadoras por otro y la suma de los Electrodomesticos (puedes crear objetos Electrodomestico, pero recuerda que Television y Lavadora también son electrodomésticos). 


Por ejemplo, si tenemos un Electrodomestico con un precio final de 300, una lavadora de 200 y una televisión de 500, el resultado final sera de 1000 (300+200+500) para electrodomésticos, 200 para lavadora y 500 para televisión.

Ejemplo de salida
~~~
//Mostramos los resultados
print "La suma del precio de los electrodomesticos es de "+ sumaElectrodomesticos 
print "La suma del precio de las lavadoras es de "+sumaLavadoras
print "La suma del precio de las televisiones es de "+sumaTelevisiones
~~~


