.PHONY: clean
OFLAGS = -lm -Wall -Werror
CFLAGS = -g -c
VPATH = src
COMPILER = gcc

bin/geom: build/geometry.o build/geometry_function.o
	$(COMPILER) $^ -o $@ $(OFLAGS)

build/geometry_function.o: geometry_function.c
	$(COMPILER) $(CFLAGS) $^ -o $@

build/geometry.o: geometry.c
	$(COMPILER) $(CFLAGS)  $^ -o $@

clean:
	rm -rf build/*.o bin/geom
