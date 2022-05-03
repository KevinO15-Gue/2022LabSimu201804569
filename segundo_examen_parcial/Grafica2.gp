unset label 
clear 
set terminal jpeg
set output "Curva1b.jpeg"
set title "curva sobre el comportamiento de los precios del combustible tipo regular" 
set xlabel "Semana"
set ylabel "Precio en quetzales por galón"
set grid
set style data linespoints
plot y = 0.445515x + 19.666668