.PHONY: clean all
CFLAGS = -lm -Wall -Werror
all: geom

geom: geometry.o geometry_function.o
	gcc geometry.o geometry_function.o -o geom $(CFLAGS)

geometry_function.o: src/geometry_function.c
	gcc -g -c src/geometry_function.c

geometry.o: src/geometry.c
	gcc -g -c src/geometry.c

clean:
	rm -rf *.o geom
