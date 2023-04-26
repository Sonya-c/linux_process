/*
Escribir un programa llamado sumasec.c donde el proceso padre genere n hijos (n pasado 
como parámetro). En un bucle que comprende de 0 a n-1 se generan los hijos; a su vez, 
cada hijo debe producir una secuencia de números enteros con valor inicial en el valor de la 
iteración que le corresponda a su creación hasta la posición 2*(iteración + 1) – 1. Estos 
números enteros se deben imprimir en la terminal con un encabezado que indique el 
número del proceso hijo que corresponda. Los números generados por cada hijo se 
sumarán y este será el valor que cada uno debe devolver al padre. El padre debe mostrar la 
suma de salida de los hijos en el orden en que se ejecutaron con su respectivo pid. 
Entrada:
./sumasec 4
Salida posible:
Listado de números impresos por proceso 49361
Proceso 49361, secuencia 1
Proceso 49361, secuencia 2
Proceso 49361, secuencia 3
Listado de números impresos por proceso 49362
Proceso 49362, secuencia 2
Proceso 49362, secuencia 3
Proceso 49362, secuencia 4
Proceso 49362, secuencia 5
Listado de números impresos por proceso 49363
Proceso 49363, secuencia 3
Proceso 49363, secuencia 4
Proceso 49363, secuencia 5
Proceso 49363, secuencia 6
Proceso 49363, secuencia 7
Listado de números impresos por proceso 49360
Proceso 49360, secuencia 0
Proceso 49360, secuencia 1
Hijo 49360 terminó con suma: 1
Hijo 49361 terminó con suma: 6
Hijo 49362 terminó con suma: 14
Hijo 49363 terminó con suma: 25
*/