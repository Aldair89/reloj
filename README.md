# reloj
Este código en C++ crea un reloj digital que muestra la hora actual del sistema en tiempo real. Funciona de manera similar al código que viste previamente. Vamos a analizarlo paso a paso:
El programa entra en un bucle while (true) que se ejecutará continuamente.

Dentro del bucle, se obtiene la hora actual del sistema utilizando la función time(0), que devuelve el número de segundos transcurridos desde el 1 de enero de 1970 hasta el momento actual.

Luego, se utiliza la función localtime(&now) para convertir el valor de tiempo en una estructura tm que contiene las componentes de la hora, como horas, minutos y segundos.

A continuación, se extraen las componentes de la hora del objeto tm y se almacenan en las variables horas, minutos y segundos.

El programa utiliza cout y la función flush para mostrar la hora en la consola en formato HH:MM:SS, donde HH representa las horas, MM los minutos y SS los segundos.

La secuencia de escape \r al inicio del mensaje permite que la siguiente impresión sobreescriba el mensaje anterior en la misma línea de la consola, de modo que el reloj se actualice en su lugar sin llenar la pantalla con nuevas líneas.

Después de mostrar la hora, se utiliza this_thread::sleep_for(chrono::seconds(1)) para hacer una pausa de 1 segundo antes de volver a actualizar la hora y mostrarla nuevamente.

Debido a que el bucle es infinito (while (true)), el reloj seguirá actualizándose y mostrando la hora actual del sistema cada segundo en tiempo real.

Para detener el reloj y finalizar el programa, se debe interrumpir la ejecución manualmente, ya que el bucle while (true) no tiene una condición de salida. Por lo tanto, el programa continuará ejecutándose hasta que se detenga manualmente.
