CC     = gcc
CFLAGS = -Wall

CFLAGS += -I./src/include/

a.out: examples/demo.c src/mock-win.c src/include/windows.h
	${CC} ${CFLAGS} ${LIBS} -o $@ $(filter %.c,$^)
