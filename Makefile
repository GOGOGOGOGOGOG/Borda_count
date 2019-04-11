.PHONY: all clean

CC = gcc
CFLAGS = -O0 -g -Wall -Werror -std=gnu99

all:	qsort


123.txt : qsort
		./qsort
sort: qsort.o
	./qsort
plot: 123.txt
	gnuplot scripts/runtime.gp
	eog runtime.png
clean:
	rm -f *.o reverse mergesort qsort 123.txt
