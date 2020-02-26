all: geom

geom: geometry.o geometry_function.o
	gcc geometry.o geometry_function.o -o geom -lm

geometry_function.o: geometry_function.c
	gcc -c geometry_function.c

geometry.o: geometry.c
	gcc -c geometry.c


clean:
	rm -rf *.o geom
