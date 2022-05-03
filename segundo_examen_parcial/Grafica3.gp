unset label 
clear 
set terminal jpeg
set output "Curva2.jpeg"
set title "grafica de f(x)" 
set xlabel "eje x"
set ylabel "eje y"
set grid
set xrange [-2:2]
set style data linespoints
plot 2+cos(exp(x)-2)-exp(x)