
/*
 * Copyright (C) 2019 Martín E. Zahnd <mzahnd at itba.edu.ar>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * ============================================================================
 * File:    main.c
 * 
 * Author:  Martín E. Zahnd                         <mzahnd at itba.edu.ar>
 *          Joaquín Artola                          <joartola at itba.edu.ar>
 *          Camila Jazmin Terrazas Socaño           <cterrazas at itba.edu.ar>
 *          Francisco Carricart                     <fcarricart at itba.edu.ar>
 *
 * Team:    Grupo 5
 * 
 * Created: October 20, 2019, 9:41 AM
 * 
 * General code description:
 *          Ejercicio 3 del Trabajo Práctico Nro. 9
 * ============================================================================
 */

// ====== Librerías ======
#include <stdio.h>
#include <stdlib.h>

// ====== Prototipos ======
int
suma_digitos(int n1);

// ====== Funciones ======

int
main(void)
{
    int ans = suma_digitos(15);
    printf("%d", ans);

    return (EXIT_SUCCESS);
}

int
suma_digitos(int n1)
{
    return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
}
