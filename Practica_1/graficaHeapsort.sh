#!/bin/bash

cat << _end_ | gnuplot
set terminal postscript eps color
set output "heapsort.eps"
set key right bottom
set xlabel "Etiqueta eje X"
set ylabel "Etiqueta Eje Y"
plot 'Heapsort.txt' using 1:2 t "Datos columna 2 frente a 1" w l,'Heapsort.txt' using 1:3 t "Datos columna 3 frente a 1" w l
_end_