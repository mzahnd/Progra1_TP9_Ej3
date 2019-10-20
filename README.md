# Progra1_TP9_Ej3
## Trabajo Práctico Nro. 9 - Herramientas de Desarrollo y Recursividad
***Grupo 5***

**Ejercicio 3**

>*Analizar la siguiente función:*
>
>```
>int suma_digitos(int n1)
>{
>   return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
>}
>```
>
>a. ¿Cuál es el objetivo de la función?
>
>b. ¿Por qué no funciona?
>
>c. Crear un repositorio de GitHub y subir un main utilizando la función tal cual está escrita. Luego, corregir la función, realizar un commit y pushearlo al repositorio.

a. Es una funcion que suma los digitos de un numero entero.

b. No funciona porque se repite infinitamente, le falta un caso base para poder salir de la recursividad, sino continua llamando la misma funcion. Además cuando se llama a la misma funcion, es necesario usar el mismo nombre (en el return se especifica digitos(n1/10) en lugar de suma_digitos(n1/10)). Para arreglarlo hay que encontrar el caso base de esta recursivdad. En este caso esto sucede una vez que n1/10 devuelve 0 por ser n1 menor a 10. Es decir agrego un if y que devuelva el valor inicial, 0, en este caso.
