CFLAGS=-fPIC -std=gnu99

all: lib test

lib: encrypt.o
	cc -shared -o libencrypt.so encrypt.o -lm

test: main.o
	cc -o test -L. main.o -lencrypt

