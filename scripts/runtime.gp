reset                                                                           
set ylabel 'votes(points)'
set style fill solid
set key center top 
set title 'perfomance comparison'
set term png enhanced font 'Verdana,10'
set output 'runtime.png'

plot [:][:50]'123.txt' using 2:xtic(1) with histogram title 'number', \
'' using ($0-0.012):($2+0.5510):2 with labels title ' ' textcolor lt 1, 
