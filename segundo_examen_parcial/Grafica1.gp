unset label
clear
set terminal jpeg
set output "Curva1a.jpeg"
set title "curva sobre el comportamiento de los precios del combustible tipo regular"
set xlabel "Semana"
set ylabel "Precio en quetzales por galón"
set grid
set style data linespoints
plot "infoparcial2" using 1:2