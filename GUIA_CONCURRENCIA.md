# Cincurrencia en Python

## Threading
### Ejercicio 1
Implemente un programa que escriba un “hola mundo” por cada hilo de ejecución que se cree (seis es un número razonable) y que además indique desde que hilo se imprime. 
Luego haga que cada uno espere un tiempo proporcional a su identificador antes de imprimir el mensaje (el thread 1, un segundo, el 2, dos segundos, el 3, tres segundos,…). Lance los threads mediante la clase thread.

### Ejercicio 2
Implemente un programa que lance cuatro threads, cada uno incrementará una variable contador de tipo entero, compartida por todos, 5000 veces y luego saldrá. No se preocupe de sincronizar los accesos a dicha variable. ¿Obtiene el resultado correcto? Ahora sincronice el acceso a dicha variable utilizando Lock. 

### Ejercicio 3
Desarrolle un programa que lea una lista de ficheros y cuente cuantas líneas, palabras y caracteres hay en cada fichero, asi como el total entre todos los ficheros (Similar al "wc" de linux). 
Modifíquelo para que se cree un thread por cada fichero a contar, cuidando de obtener igualmente el total. Mida cuanto tiempo emplea la versión secuencial para contar unos cuantos ficheros y cuanto tarda la versión utilizando thread para hacer lo mismo.

Hint: Utilice Queue para compartir información

## multiprocessing

### Ejercicio 1
Realice el ejercicio 1 del apartado Threading, utilizando multiprocessing. Nota alguna diferencia?
