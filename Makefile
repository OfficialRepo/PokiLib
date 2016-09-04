CFLAGS=-fPIC -std=gnu99

all: lib

lib: encrypt.o
	cc -shared -o encrypt.so encrypt.o -lm
